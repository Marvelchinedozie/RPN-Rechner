#ifndef ERROR_H
#define ERROR_H

/**
 * @file error.h
 * @brief Zentrale Fehlercodes und Schnittstelle zur Fehlerverwaltung.
 * @details Dieses Modul definiert projektweite Fehlercodes und deklariert
 * Funktionen zum Abfragen, Zurücksetzen und Melden des Fehlerzustands.
 */

#include <stdbool.h>

// Zentrale Fehler-Codes für das gesamte Projekt

/** @brief Fehlercode für einen Überlauf. */
#define ERR_OVERFLOW (-2)
/** @brief Fehlercode für einen Unterlauf. */
#define ERR_UNDERFLOW (-3)
/** @brief Fehlercode für eine Division durch null. */
#define ERR_DIV_ZERO (-4)

/**
 * @brief Prüft, ob derzeit ein Fehler registriert ist.
 * @return `true`, wenn ein Fehler vorliegt, andernfalls `false`.
 */
bool is_error(void);

/**
 * @brief Setzt den registrierten Fehlerzustand zurück.
 * @return Kein Rückgabewert.
 */
void error_reset(void);

/**
 * @brief Registriert einen Überlauffehler.
 * @return Kein Rückgabewert.
 */
void error_overflow(void);

/**
 * @brief Registriert einen Unterlauffehler.
 * @return Kein Rückgabewert.
 */
void error_underflow(void);

/**
 * @brief Registriert einen Fehler durch Division durch null.
 * @return Kein Rückgabewert.
 */
void error_null_division(void);

#endif /* ERROR_H */