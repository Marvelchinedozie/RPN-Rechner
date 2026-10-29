/**
 * @file controller.c
 * @brief Steuert die Verarbeitung der Rechnerbefehle und die Ausgabe des
 * Stapels.
 * @details Liest jeweils ein Token ein und delegiert die Ausführung an die
 *          passenden Stapel-, Rechen- und Anzeigefunktionen.
 */
#include "controller.h"
#include "display.h"
#include "error.h"
#include "rechnen.h"
#include "scanner.h"
#include "stack.h"
#include "token.h"
#include <stdio.h> // Für sprintf

#define OUTPUT_BUFFER_SIZE 32

/** @brief Gibt das oberste Element des Stapels aus und entfernt es.
 *  @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW.
 */
// int prt(void);
/** @brief Vertauscht die beiden obersten Stapelwerte.
 *  @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW.
 */
int swap(void);

/** @brief Gibt die obersten Stapelwerte in ihrer Stapelreihenfolge aus.
 *  @return 0 bei Erfolg, andernfalls ERR_UNDERFLOW.
 */
int prt_all(void);
/** @brief Dupliziert das oberste Stapellement.
 *  @return 0 bei Erfolg, ERR_UNDERFLOW bei leerem Stapel oder OVERFLOW bei
 * vollem Stapel.
 */
int dbl(void);

/**
 * @brief Liest ein Token ein und führt den zugehörigen Rechnerbefehl aus.
 * @return 0 bei erfolgreicher Verarbeitung, andernfalls ein Fehlercode.
 */
int controller() {
   T_token token = next_token();

   if (is_error()) {
      if (token.tok == CLEAR) {
         stack_clear();
         error_reset();
      }
      return 0;
   }

   switch (token.tok) {
   case NUMBER:
      clear_stdout();
      if (!push(token.val)) {
         return ERR_OVERFLOW;
      }
      break;
   case OVERFLOW: // Token 'O' aus token.h: eingegebene Zahl zu groß
      return ERR_OVERFLOW;

   case PLUS:
      return plus();
      break;
   case MINUS:
      return minus();
      break;
   case MULT:
      return mul();
      break;
   case DIV:
      return div();
      break;

   case PRT:
      return prt();
      break;

   case SWAP:
      return swap();
      break;
   case PRT_ALL:
      return prt_all();
      break;

   case DOUBLE:
      return dbl();
      break;
   case CLEAR:
      stack_clear();
      error_reset();
      break;

   default:
      break;
   }
   return 0;
}

/**
 * @brief Gibt das oberste Element des Stapels aus und entfernt es.
 * @return 0 bei Erfolg, andernfalls ERR_ERR_UNDERFLOW.
 */
int prt() {
   clear_stdout();
   int zahl1;
   char to_char[OUTPUT_BUFFER_SIZE];
   if (!pop(&zahl1, 0)) {
      return 0;
   }
   sprintf(to_char, "%d ", zahl1);
   print_stdout(to_char);
   clear_echo_term();
   return 0;
}

/**
 * @brief Vertauscht die beiden obersten Stapelwerte.
 * @return 0 bei Erfolg, andernfalls ERR_ERR_UNDERFLOW.
 */
int swap() {
   int zahl1;
   int zahl2;
   if (!pop(&zahl1, 0) || !pop(&zahl2, 1)) {
      return ERR_UNDERFLOW;
   }

   int val1;
   int val2;
   pop_del(&val1);
   pop_del(&val2);
   push(val1);
   push(val2);
   return 0;
}

/**
 * @brief Gibt die obersten Stapelwerte in ihrer Stapelreihenfolge aus.
 * @return 0 bei Erfolg, andernfalls ERR_ERR_UNDERFLOW.
 */
int prt_all() {
   clear_stdout();
   int zahl1;
   int zahl2;
   int zahl3;
   char to_char[OUTPUT_BUFFER_SIZE];

   if (!pop(&zahl1, 0)) {
      return ERR_UNDERFLOW;
   }

   if (pop(&zahl3, 2)) {
      sprintf(to_char, "%d ", zahl3);
      print_stdout(to_char);
   }
   if (pop(&zahl2, 1)) {
      sprintf(to_char, "%d ", zahl2);
      print_stdout(to_char);
   }
   sprintf(to_char, "%d ", zahl1);
   print_stdout(to_char);
   clear_echo_term();
   return 0;
}

/**
 * @brief Dupliziert das oberste Stapellement.
 * @return 0 bei Erfolg, ERR_ERR_UNDERFLOW bei leerem Stapel oder ERR_OVERFLOW
 * bei vollem Stapel.
 */
int dbl() {
   int zahl1;
   if (!pop(&zahl1, 0)) {
      return ERR_UNDERFLOW;
   }
   if (!push(zahl1)) {
      return OVERFLOW;
   }
   return 0;
}
