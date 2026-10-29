/**
 * @file stack.h
 * @brief Schnittstelle für einen Stapel mit fester Kapazität.
 * @details Deklariert Funktionen zum Leeren, Abfragen und Bearbeiten des
 *          Stapels.
 */
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>


/**
 * @brief Leert den Stapel.
 */
void stack_clear(void);

/**
 * @brief Prüft, ob der Stapel leer ist.
 * @return @c true, wenn der Stapel leer ist, sonst @c false.
 */
bool is_empty(void);

/**
 * @brief Prüft, ob der Stapel voll ist.
 * @return @c true, wenn der Stapel voll ist, sonst @c false.
 */
bool is_full(void);

/**
 * @brief Legt einen Wert auf dem Stapel ab.
 * @param wert Der abzulegende Wert.
 * @return @c true, wenn der Wert abgelegt wurde, sonst @c false.
 */
bool push(int wert);

/**
 * @brief Entnimmt den obersten Wert und entfernt ihn aus dem Stapel.
 * @param wert Zeiger, über den der entnommene Wert ausgegeben wird.
 * @return @c true, wenn ein Wert entnommen wurde, sonst @c false.
 */
bool pop_del(int *wert);

/**
 * @brief Führt eine Entnahme unter Verwendung des Parameters @p n aus.
 * @param wert Zeiger, über den der entnommene Wert ausgegeben wird.
 * @param n Zusätzlicher Parameter für den Entnahmevorgang.
 * @return @c true, wenn die Entnahme erfolgreich war, sonst @c false.
 */
bool pop(int *wert, int n);

#endif /* STACK_H */