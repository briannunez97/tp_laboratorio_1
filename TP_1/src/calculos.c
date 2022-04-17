/*
 * calculos.c
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"

double suma (double dato1,double dato2){

	return dato1+dato2;
}

double resta (double dato1,double dato2){

	double aux;
	aux=dato1-dato2;
	return aux;
}


double division (double dato1,double dato2){

	double aux;
	int retorno;
	retorno=validarDivisor(dato2);

	if (retorno==0){

		aux=dato1/dato2;
	}
	else
		printf("NO ES VALIDA LA DIVISION POR CERO.");
	return aux;
}

double producto (double dato1,double dato2){

	double aux;
	aux=dato1*dato2;

	return aux;
}


void calculaCostos(double v_Km,double v_preVuelo, double *p_preDeb,double *p_preCre, double *p_preBit,double *p_preUnitario, double auxDebito, double auxCredito, double auxBitcoin)
	{
		double auxProductoKMxVuelo;
		auxProductoKMxVuelo=producto(v_Km,v_preVuelo);
		*p_preDeb=resta(auxProductoKMxVuelo,producto(auxProductoKMxVuelo,auxDebito));
		*p_preCre=suma(auxProductoKMxVuelo,producto(auxProductoKMxVuelo,auxCredito));
		*p_preBit=division((auxProductoKMxVuelo),auxBitcoin);
		*p_preUnitario=division(v_preVuelo,v_Km);

	}



