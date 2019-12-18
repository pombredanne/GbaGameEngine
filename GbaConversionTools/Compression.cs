﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GbaConversionTools
{
    static class Compression
    {
        static bool IsPowerOf2(uint v)
        {
            return v != 0 && !((v & (v - 1)) != 0);
        }

        static void BitPack(List<int> src, uint destBpp, out List<UInt32> dest)
        {
            // Should be 1, 2, 4 or 8
            if (!IsPowerOf2(destBpp) || destBpp > 8)
            {
                throw new System.Exception(string.Format("Dest bits per pixel ({0}) not compatible", destBpp));
            }

            const int BITS_PER_BYTE = 8;
            int valuesPerByte = BITS_PER_BYTE / (int)destBpp;
            int valuesPerDest = sizeof(UInt32) * valuesPerByte;

            dest = new List<UInt32>();

            for (int i = 0; i < src.Count; i += valuesPerDest)
            {
                UInt32 hexNum = 0;
                for (int j = i + valuesPerDest - 1; j >= i; --j)
                {
                    int index = j < src.Count ? src[j] : 0;
                    hexNum += (UInt32)index;

                    if (j > i)
                        hexNum <<= (int)destBpp;
                }

                dest.Add(hexNum);
            }
        }

        public static void BitPack4bbp(List<int> data, out List<UInt32> dest)
        {
            BitPack(data, 4, out dest);
        }
    }
}
