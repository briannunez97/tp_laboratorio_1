/*
 * validacion.c
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */
#include <stdio.h>
#include <stdlib.h>

int validarMinimo (double dato, double minimo){

	int retorno;

	if (dato >= minimo){
		retorno = 0;
	}
	else{
		retorno = 1;
	}

	return retorno;
}


int validarRango (float dato, float minimo, float maximo){

	int retorno;

	if ((dato >= minimo) && (dato<= maximo)){
		retorno = 0;
	}
	else{
		retorno = 1;
	}

	return retorno;
}

int validarDivisor(double dato){

	int retorno;
	if(dato>0)
		retorno=0;
	else
		retorno=1;

	return retorno;
}
