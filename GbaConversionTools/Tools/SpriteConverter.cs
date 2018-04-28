﻿using System;
using System.Text;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Collections.Generic;

namespace GbaConversionTools.Tools
{
    class SpriteConverter
    {
        const int c_hexValueWrapCount = 10;
        const int c_TILEWIDTH = 8;
        const int c_TileHEIGHT = 8;
        const string namespaceTabs = "\t";

        public void Convert(string inputPath)
        {
            Bitmap bitmap = new Bitmap(inputPath);
            string outputPath = Path.GetFileNameWithoutExtension(inputPath) + ".h";

            StringBuilder sb = new StringBuilder();
            Size size = bitmap.Size;
            if (size.Width % c_TILEWIDTH != 0 || size.Height % c_TileHEIGHT != 0)
            {
                throw new Exception("Size not compatible with GBA tiles. Width and height of pixels must be multiples of 8.");
            }

            Color[] preProcessedPalette = GeneratePreprocessedPalette(bitmap);

            if (preProcessedPalette.Length > 256)
            {
                throw new Exception("Palette length out of range for the GBA");
            }

            if (preProcessedPalette.Length > 16)
            {
                throw new Exception("Palette length out of range for 4bbp format");
            }

            string namespaceName = Path.GetFileName(Path.GetFileNameWithoutExtension(inputPath));
            int hexCount = 0;

            sb.Append("namespace " + namespaceName + "\n{\n");

            WriteHeader(bitmap, preProcessedPalette, sb);
            WritePalette(preProcessedPalette, sb);
            
            sb.Append(namespaceTabs + "const u16 data[] = {\n\t" + namespaceTabs);

            int tilesWide = size.Width / c_TILEWIDTH;
            int tilesTall = size.Height / c_TileHEIGHT;
            int totalTiles = (size.Width * size.Height) / (c_TILEWIDTH * c_TileHEIGHT);

            // Loop through tiles of 8x8 tiles
            for (int tileY = 0; tileY < tilesTall; ++tileY)
            {
                for (int tileX = 0; tileX < tilesWide; ++tileX)
                {
                    int tileXOffset = tileX * c_TILEWIDTH;
                    int tileYOffset = tileY * c_TileHEIGHT;

                    for (int y = 0; y < c_TileHEIGHT; ++y)
                    {
                        for (int x = 0; x < c_TILEWIDTH; x += 4)
                        {
                            UInt16 hexNum = 0;
                            for (int i = 0; i < 4; ++i)
                            {
                                if (i > 0)
                                    hexNum <<= 4;
                                Color color = bitmap.GetPixel(x + 3 - i + tileXOffset, y + tileYOffset);
                                int index = ColorToPaletteIndex(preProcessedPalette, color);
                                hexNum += (UInt16)index;
                            }
                            sb.AppendFormat("0x{0:X4}, ", hexNum);
                            if ((hexCount + 1) % c_hexValueWrapCount == 0)
                            {
                                sb.Append("\n\t" + namespaceTabs);
                            }
                            ++hexCount;
                        }
                    }
                }
            }
            sb.Append("\n" + namespaceTabs + "};\n");
            sb.Append("}\n");

            Console.WriteLine(sb);
            File.WriteAllText(outputPath, sb.ToString());
        }

        Color[] GeneratePreprocessedPalette(Bitmap bitmap)
        {
            List<Color> palette = new List<Color>();
            palette.Add(Color.FromArgb(0));     // Always make transparent the first index

            for (int y = 0; y < bitmap.Height; ++y)
            {
                for (int x = 0; x < bitmap.Width; ++x)
                {
                    Color color = bitmap.GetPixel(x, y);
                    bool foundInPalette = false;

                    foreach (Color palColor in palette)
                    {
                        if (color == palColor)
                        {
                            foundInPalette = true;
                            break;
                        }
                    }

                    if (!foundInPalette)
                        palette.Add(color);
                }
            }

            return palette.ToArray();
        }

        void WriteHeader(Bitmap bitmap, Color[] palette, StringBuilder sb)
        {
            Size size = bitmap.Size;

            sb.AppendFormat(namespaceTabs + "const u8 width = {0}, height = {1}; \n", size.Width, size.Height);
            sb.AppendFormat(namespaceTabs + "const u8 paletteLength = {0};\n", palette.Length);
            sb.AppendFormat(namespaceTabs + "const u32 dataLength = {0};\n\n", size.Width * size.Height / 4);
        }

        void WritePalette(Color[] palette, StringBuilder sb)
        {
            sb.Append(namespaceTabs + "const u16 palette[] = {\n\t" + namespaceTabs);
            for (int i = 0; i < palette.Length; ++i)
            {
                Color color = palette[i];
                UInt16 rbgColor = (UInt16)(ScaleToRgb16(color.R) + (ScaleToRgb16(color.G) << 5) + (ScaleToRgb16(color.B) << 10));

                sb.AppendFormat("0x{0:X4}, ", rbgColor);
                if ((i + 1) % c_hexValueWrapCount == 0)
                {
                    sb.Append("\n\t" + namespaceTabs);
                }
            }
            sb.Append("\n" + namespaceTabs + "};\n\n");
        }

        int ColorToPaletteIndex(Color[] palette, Color color)
        {
            for (int i = 0; i < palette.Length; ++i)
            {
                if (color == palette[i])
                    return i;
            }

            throw new Exception("Colour not found in palette");
        }

        byte ScaleToRgb16(byte colorChannelValue)
        {
            return (byte)(Math.Round(colorChannelValue / 255.0f * 31.0f));
        }
    }
}