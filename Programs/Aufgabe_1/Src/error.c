/**
 * @file error.c
 * @brief Implementierung des Fehlermanagements und der Fehlerausgabe.
 *
 * Das Modul verwaltet den globalen Fehlerstatus und stellt Funktionen zum
 * Abfragen, Zurücksetzen und Melden von Fehlerzuständen bereit.
 */

#include "display.h"

bool error_status = false;

/**
 * @brief Gibt an, ob aktuell ein Fehlerstatus gesetzt ist.
 * @return true, wenn ein Fehler vorliegt, andernfalls false.
 */
bool is_error ()
{
    return error_status;
    
}

    /**
     * @brief Setzt den Fehlerstatus zurück und setzt die Anzeige in den Normalmodus.
     * @return Kein Rückgabewert.
     */
void error_reset()
{
    error_status = false;
    set_normal_mode();
    clear_stdout();
    clear_echo_term();
}

/**
 * @brief Setzt den Fehlerstatus und zeigt einen Overflow-Fehler an.
 * @return Kein Rückgabewert.
 */
void error_overflow()
{
    error_status = true;
    set_err_mode();
    print_stdout("Fehler: Overflow");
}

/**
 * @brief Setzt den Fehlerstatus und zeigt einen Underflow-Fehler an.
 * @return Kein Rückgabewert.
 */
void error_underflow()
{
    error_status = true;
    set_err_mode();
    print_stdout("Fehler: Underflow");
}

/**
 * @brief Setzt den Fehlerstatus und zeigt einen Fehler bei Division durch Null an.
 * @return Kein Rückgabewert.
 */
void error_null_division ()
{
    error_status = true;
    set_err_mode();
    print_stdout("Fehler: Division durch Null");
}