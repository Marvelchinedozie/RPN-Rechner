# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/1"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/tmp"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/src/Test1.Debug+ITSboard-stamp"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/src"
  "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/src/Test1.Debug+ITSboard-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/src/Test1.Debug+ITSboard-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/dasmarvels/HAW/Semester2/GS/Praktikum/ITS2_GS/Programs/Test1/tmp/ITSboard/default/Test1.Debug+ITSboard/src/Test1.Debug+ITSboard-stamp${cfgdir}") # cfgdir has leading slash
endif()
