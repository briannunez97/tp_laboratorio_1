/*
 * getData.h
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */

#ifndef GETDATA_H_
#define GETDATA_H_

/// @brief Esta funciona muestra el menu sin parametros ingresados.
///
/// @return auxOpcion RETORNA LA OPCION INGRESADA DEL MENU
int mostrarMenuVacio (void);

/// @brief Esta funciona muestra el menu con el parametro de Kilometros ya ingresado.
///
/// @param auxKm
/// @return auxOpcion RETORNA LA OPCION INGRESADA DEL MENU
int mostrarMenuKM (double auxKm);

/// @brief Esta funciona muestra el menu con el parametro de Kilometros ya ingresado.
///
/// @param auxKm
/// @return auxOpcion RETORNA LA OPCION INGRESADA DEL MENU

/// @brief Esta funciona muestra el menu con el parametro de Kilometros y Precios ya ingresados.
///
/// @param auxKm
/// @param precio1
/// @param precio2
/// @return auxOpcion RETORNA LA OPCION INGRESADA DEL MENU
int mostrarMenuPreciosYKM (double auxKm,double precio1,double precio2);

/// @brief Esta funciona muestra el menu con el parametro de Precios ya ingresado.
///
/// @param precio1
/// @param precio2
/// @return auxOpcion RETORNA LA OPCION INGRESADA DEL MENU
int mostrarMenuPrecios (double precio1,double precio2);

/// @brief Esta funcion solicita el ingreso de un valor y lo valida contra el parametro MINIMO pasado.
///
/// @param minimo
/// @param mensaje
/// @param mensajeError
/// @return auxValor
double getValor (double minimo,char *mensaje, char *mensajeError);

#endif /* GETDATA_H_ */
