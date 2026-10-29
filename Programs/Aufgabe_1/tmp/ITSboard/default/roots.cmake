# roots.cmake
set(CMSIS_PACK_ROOT "/Users/dasmarvels/.cache/arm/packs" CACHE PATH "CMSIS pack root")
cmake_path(ABSOLUTE_PATH CMSIS_PACK_ROOT NORMALIZE OUTPUT_VARIABLE CMSIS_PACK_ROOT)
set(CMSIS_COMPILER_ROOT "/Users/dasmarvels/.vscode/extensions/arm.cmsis-csolution-1.72.0-darwin-arm64/tools/cmsis-toolbox/etc" CACHE PATH "CMSIS compiler root")
cmake_path(ABSOLUTE_PATH CMSIS_COMPILER_ROOT NORMALIZE OUTPUT_VARIABLE CMSIS_COMPILER_ROOT)
set(SOLUTION_ROOT "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Aufgabe_1" CACHE PATH "CMSIS solution root")
cmake_path(ABSOLUTE_PATH SOLUTION_ROOT NORMALIZE OUTPUT_VARIABLE SOLUTION_ROOT)
