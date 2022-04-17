/*
 * calculos.h
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

/// @brief Esta funcion hace la suma de 2 valores tipo DOUBLE, y retorna un DOUBLE.
///
/// @param dato1 double
/// @param dato2 double
/// @return dato1+dato2 double
double suma (double dato1,double dato2);

/// @brief Esta funcion hace la resta de 2 valores tipo DOUBLE, y retorna un DOUBLE.
///
/// @param dato1 double
/// @param dato2 double
/// @return aux double
double resta (double dato1,double dato2);


/// @brief Esta funcion hace la division de 2 valores tipo DOUBLE. Internamente verifica que el
/// segundo parametro(divisor) sea mayor a 0 y retorna un DOUBLE.
///
/// @param dato1 double
/// @param dato2 double
/// @return aux double
double division (double dato1,double dato2);


/// @brief Esta funcion hace el producto de 2 valores tipo DOUBLE, y retorna un DOUBLE.
///
/// @param dato1 double
/// @param dato2 double
/// @return aux double
double producto (double dato1,double dato2);

/// @brief Esta funcion se encarga de calcular todos los costos llamando a otras funciones internamente.
///
/// @param v_Km	KILOMETROS
/// @param v_preVuelo PRECIO DE VUELO
/// @param p_preDeb * ES UN PUNTERO A LA VARIABLE QUE GUARDA EL RESULTADO DEL PAGO CON DEBITO.
/// @param p_preCre * ES UN PUNTERO A LA VARIABLE QUE GUARDA EL RESULTADO DEL PAGO CON CREITO.
/// @param p_preBit * ES UN PUNTERO A LA VARIABLE QUE GUARDA EL RESULTADO DEL PAGO CON BITCOIN.
/// @param p_preUnitario * ES UN PUNTERO A LA VARIABLE QUE GUARDA EL RESULTADO DEL PRECIO UNITARIO.
/// @param auxDebito PORCENTAJE DEL DESCUENTO PARA EL PAGO CON DEBITO.
/// @param auxCredito PORCENTAJE DEL INCREMENTE PARA EL PAGO CON CREDITO.
/// @param auxBitcoin VALOR DEL BITCOIN
void calculaCostos(double v_Km,double v_preVuelo, double *p_preDeb,double *p_preCre, double *p_preBit,double *p_preUnitario, double auxDebito, double auxCredito, double auxBitcoin);


#endif /* CALCULOS_H_ */
