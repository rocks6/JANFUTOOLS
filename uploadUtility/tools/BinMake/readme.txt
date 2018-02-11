BinMake
==========================
Copyright (c) 2007 Bohemia Interactive a.s. All rights reserved.

This tool is for converting editable files, used by BI's tool to file format used in ARMA engine.

Contains
========
 Binarize - tool converts objects p3d and worlds wrp to a form usable in the ARMA engine.
 CfgConvert - tool converts config.cpp to binarized format config.bin.
 CfgConvertFileChng - this tool convert rvmats to binarized format.
 Pal2PacE - makes from editable textures formats (JPG,TGA,PNG) ARMA textures format (PAA,PAC).

BinMake called with 2 arguments find a right conversion tool and use it.
List of tools and file extensions to convert is in binMakeRules.txt.

Command Line Conversion
=======================
 BinMake.exe source_file_path destination_file_path

example:
 BinMake.exe P:\addon\icon.tga P:\addon\icon.paa
 BinMake.exe P:\addon\config.cpp P:\addon\config.bin
 