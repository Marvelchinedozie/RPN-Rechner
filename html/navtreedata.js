/*
 @licstart  The following is the entire license notice for the JavaScript code in this file.

 The MIT License (MIT)

 Copyright (C) 1997-2020 by Dimitri van Heesch

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 and associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute,
 sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or
 substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 @licend  The above is the entire license notice for the JavaScript code in this file
*/
var NAVTREE =
[
  [ "My Project", "index.html", [
    [ "Tipps zur Entwicklung unter VSCode auf dem ITS-Board", "md__erste_hilfe_koffer.html", [
      [ "Beschreibung des Systems", "md__erste_hilfe_koffer.html#autotoc_md1", null ],
      [ "Aufbau der Entwicklungsumgebung", "md__erste_hilfe_koffer.html#autotoc_md2", [
        [ "Verwendete Komponenten", "md__erste_hilfe_koffer.html#autotoc_md3", null ],
        [ "Projektkonfiguration (YAML-Dateien)", "md__erste_hilfe_koffer.html#autotoc_md4", null ],
        [ "Build-Prozess (CMSIS-Toolbox + CMake)", "md__erste_hilfe_koffer.html#autotoc_md5", null ],
        [ "Debugging/Flashing (PyOCD)", "md__erste_hilfe_koffer.html#autotoc_md6", null ],
        [ "Einflussnahme auf den Build-Prozess", "md__erste_hilfe_koffer.html#autotoc_md7", null ]
      ] ],
      [ "Tipps und Tricks", "md__erste_hilfe_koffer.html#autotoc_md8", [
        [ "Board kann nicht geflashed werden - keine Verbindung", "md__erste_hilfe_koffer.html#autotoc_md9", null ],
        [ "Compiler Flags in der Ausgabe sehen", "md__erste_hilfe_koffer.html#autotoc_md10", null ],
        [ "Verwendung von printf", "md__erste_hilfe_koffer.html#autotoc_md11", null ],
        [ "ARM Debugger Befehle eingeben", "md__erste_hilfe_koffer.html#autotoc_md12", null ],
        [ "Open Disassembler View", "md__erste_hilfe_koffer.html#autotoc_md13", null ],
        [ "Darstellung des Memory Inhalts", "md__erste_hilfe_koffer.html#autotoc_md14", null ],
        [ "In main.s kann man keinen Breakpoint setzen", "md__erste_hilfe_koffer.html#autotoc_md15", null ],
        [ "VSCode-Benutzerdaten-Cache", "md__erste_hilfe_koffer.html#autotoc_md16", null ],
        [ "Debugger hält nicht beim ersten Befehl einer Assembler Prozedur", "md__erste_hilfe_koffer.html#autotoc_md17", null ],
        [ "Probleme mit den C-Pretty-Printer oder clang-tity", "md__erste_hilfe_koffer.html#autotoc_md18", null ],
        [ "Probleme mit clang-tidy", "md__erste_hilfe_koffer.html#autotoc_md19", null ]
      ] ]
    ] ],
    [ "Inhaltsverzeichnis", "md__r_e_a_d_m_e.html", [
      [ "Anleitung zur Installation von ST-Link", "md__r_e_a_d_m_e.html#autotoc_md21", [
        [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md22", null ],
        [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md23", null ],
        [ "macOS", "md__r_e_a_d_m_e.html#autotoc_md24", null ]
      ] ],
      [ "Anleitung zur Installation von Visual Studio Code und MDK 6", "md__r_e_a_d_m_e.html#autotoc_md25", [
        [ "Systemanforderungen", "md__r_e_a_d_m_e.html#autotoc_md26", null ],
        [ "Schritte zur Installation", "md__r_e_a_d_m_e.html#autotoc_md27", [
          [ "1. Visual Studio Code Webseite besuchen", "md__r_e_a_d_m_e.html#autotoc_md28", null ],
          [ "2. Passende Version herunterladen", "md__r_e_a_d_m_e.html#autotoc_md29", null ]
        ] ],
        [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md30", null ],
        [ "macOS", "md__r_e_a_d_m_e.html#autotoc_md31", null ],
        [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md32", [
          [ "Debian- und Ubuntu-basierte Distributionen", "md__r_e_a_d_m_e.html#autotoc_md33", null ]
        ] ]
      ] ],
      [ "Installation von Arm Keil Studio Pack in VS Code", "md__r_e_a_d_m_e.html#autotoc_md34", null ],
      [ "Anleitung zum Auschecken eines GitHub-Projekts in VS Code", "md__r_e_a_d_m_e.html#autotoc_md35", null ],
      [ "Ein Projekt wählen, builden und auf das Board übertragen", "md__r_e_a_d_m_e.html#autotoc_md38", null ],
      [ "Building", "md__r_e_a_d_m_e.html#autotoc_md39", null ],
      [ "Neues Projekt erstellen", "md__r_e_a_d_m_e.html#autotoc_md40", null ],
      [ "Neue C Module in vs Code integrieren", "md__r_e_a_d_m_e.html#autotoc_md41", null ],
      [ "Installation und Verwendung des C-Petty-Printers", "md__r_e_a_d_m_e.html#autotoc_md42", [
        [ "Konfiguration des clang Pretty-Printers", "md__r_e_a_d_m_e.html#autotoc_md43", null ],
        [ "Aufruf des Pretty-Printers für eine Datei im Text-Editor", "md__r_e_a_d_m_e.html#autotoc_md44", [
          [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md45", null ],
          [ "Linux (Ubuntu)", "md__r_e_a_d_m_e.html#autotoc_md46", null ],
          [ "MAC", "md__r_e_a_d_m_e.html#autotoc_md47", null ]
        ] ],
        [ "Aufruf des Pretty-Printers für alle Dateien des CMSIS-Projekts", "md__r_e_a_d_m_e.html#autotoc_md48", [
          [ "Installation von Python", "md__r_e_a_d_m_e.html#autotoc_md49", [
            [ "MAC", "md__r_e_a_d_m_e.html#autotoc_md50", null ],
            [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md51", null ],
            [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md52", null ]
          ] ],
          [ "Installation der clang Pretty-Printers", "md__r_e_a_d_m_e.html#autotoc_md53", [
            [ "MAC", "md__r_e_a_d_m_e.html#autotoc_md54", null ],
            [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md55", null ],
            [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md56", null ]
          ] ],
          [ "Ausführung des Pretty-Printers", "md__r_e_a_d_m_e.html#autotoc_md57", null ]
        ] ]
      ] ],
      [ "Installation und Verwendung des C-Linters von clang", "md__r_e_a_d_m_e.html#autotoc_md58", [
        [ "Konfiguration des Linters clang-tidy", "md__r_e_a_d_m_e.html#autotoc_md59", null ],
        [ "Ausgabe der Warnungen von clang-tidy", "md__r_e_a_d_m_e.html#autotoc_md60", null ],
        [ "Nutzung einer eigenständigen clang-tidy Version", "md__r_e_a_d_m_e.html#autotoc_md61", [
          [ "Installation von python3", "md__r_e_a_d_m_e.html#autotoc_md62", [
            [ "Installation des Moduls pyyaml", "md__r_e_a_d_m_e.html#autotoc_md63", [
              [ "MAC", "md__r_e_a_d_m_e.html#autotoc_md64", null ],
              [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md65", null ],
              [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md66", null ]
            ] ]
          ] ],
          [ "Installation von clang-tidy", "md__r_e_a_d_m_e.html#autotoc_md67", [
            [ "MAC", "md__r_e_a_d_m_e.html#autotoc_md68", null ],
            [ "Linux", "md__r_e_a_d_m_e.html#autotoc_md69", null ],
            [ "Windows", "md__r_e_a_d_m_e.html#autotoc_md70", null ]
          ] ],
          [ "Ausführung des externen clang-tidy Version", "md__r_e_a_d_m_e.html#autotoc_md71", null ]
        ] ]
      ] ],
      [ "Keil GUI", "md__r_e_a_d_m_e.html#autotoc_md72", [
        [ "Dokumentation (To be fixed)", "md__r_e_a_d_m_e.html#autotoc_md74", null ],
        [ "Troubleshooting", "md__r_e_a_d_m_e.html#autotoc_md75", [
          [ "Probleme Submodule", "md__r_e_a_d_m_e.html#autotoc_md76", null ]
        ] ]
      ] ]
    ] ]
  ] ]
];

var NAVTREEINDEX =
[
"index.html"
];

const SYNCONMSG = 'click to disable panel synchronization';
const SYNCOFFMSG = 'click to enable panel synchronization';
const LISTOFALLMEMBERS = 'List of all members';