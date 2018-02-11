del binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo # Model file conversion>> binMakeRules.txt
echo .p3d.bip3d:>> binMakeRules.txt>> binMakeRules.txt
echo         "%CD%\binarize\binarize.exe" -o "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .p3d.p3d:>> binMakeRules.txt
echo         "%CD%\binarize\binarize.exe" -o "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo # World file conversion>> binMakeRules.txt
echo .wrp.biwrp:>> binMakeRules.txt
echo         "%CD%\binarize\binarize.exe" -o "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .wrp.wrp:>> binMakeRules.txt
echo         "%CD%\binarize\binarize.exe" -o "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo #Config file conversion>> binMakeRules.txt
echo .cpp.bin:>> binMakeRules.txt
echo         "%CD%\CfgConvert\CfgConvert.exe" -bin -dst "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .cpp.bicpp:>> binMakeRules.txt
echo         "%CD%\CfgConvert\CfgConvert.exe" -bin -dst "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo #Material conversion>> binMakeRules.txt
echo # Material is a ParamFile>> binMakeRules.txt
echo .rvmat.rvmat:>> binMakeRules.txt
echo         "%CD%\CfgConvertFileChng\CfgConvertFileChng.exe" -bin -dst "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .bimpas.bimpas:>> binMakeRules.txt
echo         "%CD%\CfgConvertFileChng\CfgConvertFileChng.exe" -bin -dst "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .bisurf.bisurf:>> binMakeRules.txt
echo         "%CD%\CfgConvertFileChng\CfgConvertFileChng.exe" -bin -dst "$@" "$<">> binMakeRules.txt
echo.>>binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo #Texture file conversion>> binMakeRules.txt
echo .gif.bi:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .tga.bitga:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .tga.paa:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .png.paa:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .tga.pac:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .png.pac:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .gif.pac:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .paa.paa:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo .pac.pac:>> binMakeRules.txt
echo         "%CD%\Pal2PacE\Pal2PacE.exe" "$<" "$@">> binMakeRules.txt
echo.>>binMakeRules.txt
echo ########################################################################>> binMakeRules.txt
echo ### How to add new rules:>> binMakeRules.txt
echo ###>> binMakeRules.txt
echo ### Each rules starts with suffixes telling which formats are converted by the rule,>> binMakeRules.txt
echo ### followed by list of commands>> binMakeRules.txt
echo ### list of commands is terminated by empty line>> binMakeRules.txt
echo ### Following special variables can be used in commands:>> binMakeRules.txt
echo ###    "$<"  Input file path>> binMakeRules.txt
echo ###    "$@"  Output file path>> binMakeRules.txt