# Team-Mitglieder: Ahmad Abualneaj, Marvelous Chinedozie
# Aufgabe 1 RPN Taschenrechner
-------------------------------------------------------------
# Funktionsumfang:

+ Summe bilden und auf den Stack legen
- zweiter Wert minus erster Wert
* Produkt bilden
/ zweiter Wert geteilt durch ersten Wert

p Obersten Stack Wert ausdrucken.
P Die drei oberste Stack Werte ausdrucken.
C Alle Stack Einträge löschen, Rechner neu init. und die Fehlermeldung löschen.
d Obersten Eintrag duplizieren.
r Reihenfolge der obersten zwei Einträge vertauschen.

Sollen zwei Zahlen hintereinander auf den Stack geschrieben werden, werden diese durch die Eingabe der Enter Taste (Taste ist nicht beschriftet) getrennt.
-------------------------------------------------------------

# Fehlerbehandlung:

_ Nach einem Fehler gibt der Rechner einen Text aus und blockiert, bis die Taste C zum Zurücksetzen gedrückt wird

Folgende Fehler müssen erkannt und gemeldet werden:

_ Division durch Null
_ Bereichsüberschreitung (Overflow)
_ Stack Overflow (push auf vollen Stack) und Stack Underflow (pop auf leeren Stack)
--------------------------------------------------------------
# Implimntieren:

## ** Modul 1: stack
_ push: Zahl auf den Stack legen
_ pop: Zahl vom Stack holen

## ** Modul 2: rechnen
Addition (mit Overflow Prüfung)
Subtraktion (mit Overflow Prüfung)
Multiplikation (mit Overflow Prüfung)
Division (mit Division durch Null Prüfung)

## ** Modul 3: error
Fehlerbehandlung

## ** Modul 4: controller
p Obersten Stack Wert ausdrucken. 
P Die drei oberste Stack Werte ausdrucken.
C Alle Stack Einträge löschen, Rechner neu init. und die Fehlermeldung löschen.
d Obersten Eintrag duplizieren.
r Reihenfolge der obersten zwei Einträge vertauschen.





