/**
 * @file rechnen.c
 * @brief Implementiert die arithmetischen Stack-Operationen.
 *
 * Die Funktionen entnehmen ihre Operanden dem Stack, führen die jeweilige
 * Berechnung aus und legen das Ergebnis wieder auf dem Stack ab.
 */

#include "rechnen.h"
#include "error.h"
#include "stack.h"
#include <limits.h>

/**
 * @brief Addiert die beiden obersten Werte des Stacks.
 *
 * Bei erfolgreicher Berechnung werden beide Operanden entfernt und die Summe
 * auf den Stack gelegt. Ein Überlauf oder fehlende Operanden werden als Fehler
 * gemeldet.
 * @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW oder ERR_OVERFLOW.
 */
int plus() {
   int top_operand = 0;
   int second_operand = 0;
   int erg = 0;
   int status = 0;
   if (!pop(&top_operand, 0) || !pop(&second_operand, 1)) {
      status = ERR_UNDERFLOW;
   } else if ((second_operand > 0 && top_operand > INT_MAX - second_operand) ||
              (second_operand < 0 && top_operand < INT_MIN - second_operand)) {
      status = ERR_OVERFLOW;
   } else {
      pop_del(&top_operand);
      pop_del(&second_operand);
      erg = top_operand + second_operand;
      if (!push(erg)) {
         status = ERR_OVERFLOW;
      }
      // else {prt();}
   }
   return status;
}

/**
 * @brief Subtrahiert den obersten Stack-Wert vom darunterliegenden Wert.
 *
 * Bei erfolgreicher Berechnung werden beide Operanden entfernt und die
 * Differenz auf den Stack gelegt. Ein Überlauf oder fehlende Operanden werden
 * als Fehler gemeldet.
 * @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW oder ERR_OVERFLOW.
 */
int minus() {
   int top_operand = 0;
   int second_operand = 0;
   int erg = 0;
   int status = 0;
   if (!pop(&top_operand, 0) || !pop(&second_operand, 1)) {
      status = ERR_UNDERFLOW;
   } else if ((top_operand < 0 && second_operand > INT_MAX + top_operand) ||
              (top_operand > 0 && second_operand < INT_MIN + top_operand)) {
      status = ERR_OVERFLOW;
   } else {
      pop_del(&top_operand);
      pop_del(&second_operand);
      erg = second_operand - top_operand;
      if (!push(erg)) {
         status = ERR_OVERFLOW;
      }
      // else {prt();}
   }
   return status;
}

/**
 * @brief Multipliziert die beiden obersten Werte des Stacks.
 *
 * Bei erfolgreicher Berechnung werden beide Operanden entfernt und das Produkt
 * auf den Stack gelegt. Ein Überlauf oder fehlende Operanden werden als Fehler
 * gemeldet.
 * @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW oder ERR_OVERFLOW.
 */
int mul() {
   int first_operand = 0;
   int second_operand = 0;
   int erg = 0;
   int status = 0;
   if (!pop(&first_operand, 0) || !pop(&second_operand, 1)) {
      status = ERR_UNDERFLOW;
   }

   else if (second_operand != 0 && first_operand != 0 &&
            ((second_operand > 0 && first_operand > 0 &&
              second_operand > INT_MAX / first_operand) ||
             (second_operand > 0 && first_operand < 0 &&
              first_operand < INT_MIN / second_operand) ||
             (second_operand < 0 && first_operand > 0 &&
              second_operand < INT_MIN / first_operand) ||
             (second_operand < 0 && first_operand < 0 &&
              second_operand < INT_MAX / first_operand))) {
      status = ERR_OVERFLOW;
   } else {
      pop_del(&first_operand);
      pop_del(&second_operand);
      erg = first_operand * second_operand;
      if (!push(erg)) {
         status = ERR_OVERFLOW;
      } // else {prt();}
   }
   return status;
}

/**
 * @brief Dividiert den darunterliegenden Stack-Wert durch den obersten Wert.
 *
 * Bei erfolgreicher Berechnung werden beide Operanden entfernt und der
 * ganzzahlige Quotient auf den Stack gelegt. Fehlende Operanden, eine Division
 * durch null oder ein Überlauf werden als Fehler gemeldet.
 * @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW, ERR_DIV_ZERO oder
 * ERR_OVERFLOW.
 */
int div() {
   int divisor = 0;
   int dividend = 0;
   int erg = 0;
   int status = 0;
   if (!pop(&divisor, 0) || !pop(&dividend, 1)) {
      status = ERR_UNDERFLOW;
   } else if (divisor == 0) {
      status = ERR_DIV_ZERO;
   } else if (dividend == INT_MIN && divisor == -1) {
      status = ERR_OVERFLOW;
   } else {
      pop_del(&divisor);
      pop_del(&dividend);
      erg = dividend / divisor;
      if (!push(erg)) {
         status = ERR_OVERFLOW;
      } // else {prt();}
   }
   return status;
}