┌──────────────────────────────┐
│            main.c            │
│ Board initialisieren         │
│ Controller aufrufen          │
│ Fehler behandeln             │
└──────────────┬───────────────┘
               │ ruft auf
               ▼
┌──────────────────────────────┐
│         controller.c         │
│ Tokens auswerten             │
│ Befehle koordinieren         │
└──────┬──────┬──────┬─────────┘
       │      │      │
       ▼      ▼      ▼
┌──────────┐ ┌────────────┐ ┌─────────────┐
│scanner.c │ │ rechnen.c  │ │  stack.c    │
│          │ │            │ │             │
│ Eingabe  │ │ + - * /    │ │ push / pop  │
│ Token    │ │ Berechnung │ │ Stack       │
└──────────┘ └─────┬──────┘ └─────────────┘
                   │              ▲
                   └──────────────┘
                      verwendet

       ┌────────────────────────────┐
       │          error.c           │
       │ Fehlerstatus und Meldungen │
       └────────────────────────────┘

       ┌────────────────────────────┐
       │         display.c          │
       │ LCD-Ausgabe und Anzeige    │
       └────────────────────────────┘



UML-MODULSTRUKTUR: STACK-RECHNER
================================

+---------------------------+
|           main.c          |----------------------------------------
+---------------------------+										|
| + main()                  |										|
+---------------------------+										|
             |														|
             | ruft auf												|								
             v														|
+---------------------------+										|
|        controller.c       |										|
+---------------------------+										|
| + controller()            |										|
| + prt()                   |										|
| + swap()                  |										|
| + prtAll()                |										|
| + dbl()                   |										|
| + prtStatus()             |										|
+---------------------------+										|
      |       	        |	|										|
      |      	        |	 ---------------|						|
      v       	        v					|						|
											v						|
+-------------+  +----------------+  +----------------+				|
|  scanner.c  |  |   rechnen.c    |  |    stack.c     |				|
+-------------+  +----------------+  +----------------+				|
| + next_token|  | + plus()       |  | + push()       |				|
|              |  | + minus()      |  | + pop()        |			|
|              |  | + mul()        |  | + pop_Del()    |			|
|              |  | + div()        |  | + stackClear() |			|
+-------------+  +----------------+  | + isEmpty()    |				|
                         |           | + isFull()     |				|
                         +---------->|                |				|
                                     +----------------+				|
																	|
+---------------------------+										|
|          error.c          |<---------------------------------------
+---------------------------+
| - error_status            |
| + isError()               |
| + errorReset()            |
| + errorOverflow()         |
| + errorUnderflow()        |
| + errorNullDivision()     |
+---------------------------+

+---------------------------+
|         display.c         |
+---------------------------+
| + init_display()          |
| + print_stdout()          |
| + clear_stdout()          |
| + clear_echo_term()       |
| + set_err_mode()          |
| + set_normal_mode()       |
+---------------------------+

+---------------------------+
|       Hardware / LCD      |
+---------------------------+
| + initITSboard()          |
| + LCD-Funktionen          |
| + Touch-Funktionen        |
+---------------------------+


ABHAENGIGKEITEN
===============

main.c        --> controller.c
main.c        --> display.c
main.c        --> error.c

controller.c  --> scanner.c
controller.c  --> rechnen.c
controller.c  --> stack.c
controller.c  --> error.c
controller.c  --> display.c

rechnen.c     --> stack.c
rechnen.c     --> error.h

stack.c       --> display.c
error.c       --> display.c
display.c     --> Hardware / LCD