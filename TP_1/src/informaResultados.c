/*
 * informaResultados.c
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */
#include <stdio.h>
#include <stdlib.h>

/// @brief Esta funciona informa un mensaje y un valor pasado por parametro.
///
/// @param mensaje
/// @param dato
///
void informarResultado(char *mensaje, double dato){

	printf("%s%.2lf",mensaje,dato);
}
