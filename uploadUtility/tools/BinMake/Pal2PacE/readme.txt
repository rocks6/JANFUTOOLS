Pal2PacE
=========
Copyright (c) 2007 Bohemia Interactive a.s. All rights reserved.

Pal2PacE is a texture conversion tool supporting internal texture formats of Bohemia Interactive's game engines.

Supported formats
=================

Input:
JPG
TGA (24 bit / 32 bit with alpha channel )
PNG (with or without alpha channel)
PAA
PAC

Important note: All input textures must have resolution 2^x / 2^y (e.g. 16 / 16, 32 / 32, 64 / 64, 256 /256). The largest texture size commonly supported by graphics cards and BI's game engines is 2048x2048, in future graphics textures 4096x4096 or even larger could be possible and it is already supported in Pal2PacE.

Output:
PAA/PAC
TGA (32 bit with alpha channel)
PNG (with alpha channel)

Command Line Conversion
=======================

For commandline and batch conversions use Pal2PacE.exe. 

Arguments used:
Usage:  pal2pace [saveoptions] <source> [<destination>]

SaveOptions:
        -size=<n>


example how to generate new paa files from TGA sources: 
Pal2PacE x:\Test\*.tga