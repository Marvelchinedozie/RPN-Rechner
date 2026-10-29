# Testbericht:

Legende für die Einträge:
[ ] = Test wurde nicht durchgeführt
[x] = Test wurde erfolgreich durchgeführt
[ ] = Test ist fehlgeschlagen

--------------------------------------------------------------------------------
TEST-MATRIX
--------------------------------------------------------------------------------

Nr.   | Testbeschreibung                  | Eingabe 		           | Erwartetes Ergebnis                        | Status (OK)
--------------------------------------------------------------------------------
1     | Einfache Zahleneingabe & Ausgabe  | 123 p                      | Anzeige zeigt "123"                        | [x]
2     | Grundrechenarten (Addition)       | 5 3 + p                    | Anzeige zeigt "8"                          | [x]
3     | Stack Underflow bei Rechenop.     | 5 +                        | System wechselt in Underflow-Fehler        | [x]
4     | Stack Underflow bei Print         | p (bei leerem Stack)       | System wechselt in Underflow-Fehler        | [x]
5     | Stack Overflow (Stack-Größe = 10) | 11 Zahlen nacheinander     | System meldet Overflow (Stack voll)        | [x]
6     | Multiplikation (kein Overflow)    | -2 1024 * 1024 * 1024 * p  | Ergibt -2147483648 (INT_MIN), kein Fehler  | [x]
7     | Multiplikation (mit Overflow)     | -2 1024 * 1024 * 1024 * -1*| System wechselt in Overflow-Fehlerzustand  | [x]
8     | Division durch 0                  | 5 0 /                      | System wechselt in "Division durch Null"   | [x]
9     | Eingabe INT_MAX                   | 2147483647 p               | Zahl wird fehlerfrei akzeptiert            | [x]
10    | Eingabe INT_MAX + 1 (Fehler)      | 2147483648                 | Scanner/Eingabe meldet Overflow-Fehler     | [x]
11    | Verarbeitung & Ausgabe INT_MIN    | -2147483648 p              | Wert wird fehlerfrei ausgegeben            | [x]
12    | Error-Lock Mechanismus            | Nach Fehler Ziffer/+ drücken | Eingabe gesperrt bis CLEAR (C)           | [x]
13    | Test von SWAP                     | 10 20 r p                  | Oberster Wert 10, darunter 20              | [x]
14    | Test von DOUBLE                   | 42 d p                     | Stack enthält zweimal 42                   | [x]
15    | Test von PRT_ALL                  | 10 20 30 P                 | Gibt oberste 3 Werte [30, 20, 10] aus      | [x]
--------------------------------------------------------------------------------











----------------------------------------
# Funktionstest
----------------------------------------
## Test 1:
    "4 2 +" eingeben
    Legt das Ergebnis 6 auf den Stack.

## Test 2:
    "4 2 -" eingeben
    Legt das Ergebnis 2 auf den Stack.

## Test 3:
    "4 2 *" eingeben
    Legt das Ergebnis 8 auf den Stack.

## Test 4:
    "4 2 /" eingeben
    Legt das Ergebnis 2 auf den Stack.

## Test 5:
    p drücken
    Zeigt den obersten Wert des Stacks an (bei nicht leerem Zustand)

## Test 6:
    P drücken
    Zeigt die obersten 3 Werte des Stacks an (bei nicht leerem Zustand)

## Test 7:
    d drücken
    Dupliziert den obersten Eintrag auf dem Stack.

## Test 8:
    r drücken
    Vertauscht die Reihenfolge der obersten zwei Stack-Einträge.

## Test 9:
    c drücken
    Löscht alle Stack-Einträge, initialisiert den Rechner neu und entfernt die Fehlermeldung.

----------------------------------------
# Fehler-Test
----------------------------------------

## Test 10: Stack Underflow
    Eingabe: Eine Rechenoperation (`+`) bei komplett leerem Stack.

    Rechner erkennt den Fehler, schaltet auf den FehlerModus um, zeigt `"Stack Underflow"` und blockiert weitere Eingaben, bis `C` gedrückt wird.

## Test 11: Stack Overflow
    Eingabe: Mehr als 32 Zahlen nacheinander eingeben (Stack überfüllen).

    Rechner erkennt, dass der Speicher voll ist, schaltet in den FehlerModus, zeigt `"Stack Overflow"` und blockiert weitere Eingaben, bis `C` gedrückt wird.

## Test 12: Division durch Null
    Eingabe: `5 0 /`

    Reaktion: Rechner bricht die Division ab, schaltet in den FehlerModus und zeigt `"Math Error"`und blockiert weitere Eingaben, bis `C` gedrückt wird.

