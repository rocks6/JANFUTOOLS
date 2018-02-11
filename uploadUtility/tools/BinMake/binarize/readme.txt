Binarize
========
Copyright (c) 2004 Bohemia Interactive Studio.
All rights reserved.
For internal use only.


Binarize tools converts objects p3d and worlds wrp to a form usable in the Flashpoint engine.


Usage:
------

binarize [options] source destination mask
Options:
        -textures=<path>
        -exclude=<filename>
        -addon=<addon folder> Additonal config is loaded from this folder

     
      
Current directory
-----------------

Binarize converts p3d and wrp using provided config files. It's important to use defined current directory as there are many files used from there.

cd \ 
(current directory / current_dir)


Config files
------------

Binarize uses following config files:

current_dir\binarize\bin\config.cpp
current_dir\addon_folder\config.cpp (one or more addon folders can be defined using -adddon option)
source_dir\config.cpp (and all config.cpp that are located in subfolders of the source directory)


p3d Objects
-----------

Binarize takes all textures and materials used in binarized p3d object and copies them into path defined by "-textures=<path>" with full path to the texture added as it is defined in the object.

During processing the object, binarize will use class CfgModels from all used config.cpp files and creates independent sections from any named selection listed in CfgModels.

Some proxy models used there must be present in the current directory during binarization.

Wrp Worlds
----------

When you binarize worlds, any object defined in config.cpp files under class "ReplaceObjects" can be replaced accordingly.

All models used in the wrp file shall be available under the correct path in the current directory. 

Binarize takes all textures and materials used in binarized wrp object and copies them into path defined by "-textures=<path>" with full path to the textures and materials added as it is defined in the world.

Rvmat
-----
Current version of binarize doesn't support rvmat files and these must be copied manually.


-exclude
---------
=list of files to leave binarizing.


