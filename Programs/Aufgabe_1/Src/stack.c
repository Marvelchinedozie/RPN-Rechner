/**
 * @file stack.c
 * @brief Implementierung eines einfachen ganzzahligen Stapels (Stack).
 *
 * Dieses Modul verwaltet einen Stack mit fester Größe. Es stellt Funktionen
 * zum Leeren, Prüfen sowie zum Hinzufügen und AUSLESEN von Werten bereit.
 */
#include "stack.h"
#include "display.h"
#define EMPTY (-1)

#define STACK_SIZE 10

/** Interner Speicher des Stacks. */
int stack[STACK_SIZE];
/** Index des obersten Elements oder @c EMPTY, wenn der Stack leer ist. */
int position = EMPTY;

/**
 * @brief Leert den Stack.
 * @return Kein Rückgabewert.
 */
void stack_clear() { position = EMPTY; }

/**
 * @brief Prüft, ob der Stack leer ist.
 * @return @c true, wenn der Stack leer ist, andernfalls @c false.
 */
bool is_empty() { return position == EMPTY; }

/**
 * @brief Prüft, ob der Stack seine maximale Größe erreicht hat.
 * @return @c true, wenn der Stack voll ist, andernfalls @c false.
 */
bool is_full() { return position == STACK_SIZE - 1; }

/**
 * @brief Legt einen Wert auf dem Stack ab.
 * @param wert Der abzulegende ganzzahlige Wert.
 * @return @c true, wenn der Wert abgelegt wurde, andernfalls @c false.
 */
bool push(int wert) {

   bool status;

   if (is_full()) {
      status = false;
   } else {
      position += 1;
      stack[position] = wert;
      status = true;
   }

   return status;
}

/**
 * @brief Entfernt das oberste Element und gibt es zurück.
 * @param wert Zeiger auf die Variable, in der das entfernte Element gespeichert
 * wird.
 * @return @c true, wenn ein Element entfernt wurde, andernfalls @c false.
 */
bool pop_del(int *wert) {
   bool status;

   if (is_empty()) {
      status = false;
   } else {
      *wert = stack[position--];
      status = true;
   }
   return status;
}

/**
 * @brief Liest ein Element anhand seines Abstands zur Stack-Spitze aus.
 * @param wert Zeiger auf die Variable, in der das gelesene Element gespeichert
 * wird.
 * @param n Abstand zur Stack-Spitze (0 bezeichnet das oberste Element).
 * @return @c true, wenn ein Element gelesen wurde, andernfalls @c false.
 */
bool pop(int *wert, int n) {
   bool status;

   if (is_empty() || n > position) {
      status = false;
   } else {
      *wert = stack[position - n];
      status = true;
   }
   return status;
}
