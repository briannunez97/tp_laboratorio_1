/*
 * validacion.h
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */

#ifndef VALIDACION_H_
#define VALIDACION_H_

#include <stdio.h>
#include <stdlib.h>

/// @brief Esta funciona valida que el dato sea mayor o igual al minimo. En caso de ser verdadero
/// retorna un 0, sino un 1.
///
/// @param dato double
/// @param minimo double
/// @return retorno int
int validarMinimo (double dato, double minimo);


/// @brief Esta funciona valida que el dato ingresado este dentro del rango permitido.En caso de ser verdadero
/// retorna un 0, sino un 1.
/// @param dato float
/// @param minimo float
/// @param maximo float
/// @return retorno int
int validarRango (float dato, float minimo, float maximo);

/// @brief Esta funciona valida que el dato ingresado sea mayor a cero.En caso de ser verdadero
/// retorna un 0, sino un 1.
///
/// @param dato double
/// @return retorno int
int validarDivisor(double dato);


#endif /* VALIDACION_H_ */
