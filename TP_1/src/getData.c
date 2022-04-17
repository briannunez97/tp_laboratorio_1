/*
 * getData.c
 *
 *  Created on: 13 abr. 2022
 *      Author: Brian
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"

double getValor (double minimo,char *mensaje, char *mensajeError){

	double auxValor;
	int retorno;

	do {
		retorno=0;

		if (retorno==0){
			printf("%s", mensaje);
			scanf("%lf",&auxValor);
			retorno=validarMinimo(auxValor,minimo);
		}

		if(retorno==1)
		{
			printf("%s", mensajeError);
		}

	}while (retorno!=0);



	return auxValor;
}

int mostrarMenuVacio (){

	int auxOpcion;
	int retorno;
	do{
			retorno=0;
			if (retorno==0){
				printf("\n\n=====================================\n");
				printf("=====================================\n");
				printf("========    MENU PRINCIPAL   ========\n");
				printf("=====================================\n");
				printf("=====================================\n");
				printf("\t1. INGRESAR KILOMETROS\n");
				printf("\t2. INGRESAR PRECIO DE VUELOS\n");
				printf("\t3. CALCULAR TODOS LOS COSTOS\n");
				printf("\t4. INFORMAR RESULTADOS\n");
				printf("\t5. CARGA FORZADA DE DATOS\n");
				printf("\t6. SALIR DEL PROGRAMA\n");
				printf("-----------------------------------\n");
				printf("POR FAVOR, ELEGIR UNA OPCION: ");
				scanf("%d",&auxOpcion);
				retorno=validarRango(auxOpcion,1,6);
			}

			if (retorno==1)
			{
				printf("\nOPCION INCORRECTA. INGRESAR NUEVAMENTE.\n");
			}

	}while( retorno!=0);


	return auxOpcion;
}


int mostrarMenuKM (double auxKm){

	int auxOpcion;
	int retorno;
	do{
			retorno=0;
			if (retorno==0){
				printf("\n\n=====================================\n");
				printf("=====================================\n");
				printf("========    MENU PRINCIPAL   ========\n");
				printf("=====================================\n");
				printf("=====================================\n");
				printf("\t1. INGRESAR KILOMETROS: KMs=%.2lf\n",auxKm);
				printf("\t2. INGRESAR PRECIO DE VUELOS\n");
				printf("\t3. CALCULAR TODOS LOS COSTOS\n");
				printf("\t4. INFORMAR RESULTADOS\n");
				printf("\t5. CARGA FORZADA DE DATOS\n");
				printf("\t6. SALIR DEL PROGRAMA\n");
				printf("-----------------------------------\n");
				printf("POR FAVOR, ELEGIR UNA OPCION: ");
				scanf("%d",&auxOpcion);
				retorno=validarRango(auxOpcion,1,6);
			}

			if (retorno==1)
			{
				printf("\nOPCION INCORRECTA. INGRESAR NUEVAMENTE.\n");
			}

	}while( retorno!=0);


	return auxOpcion;
}


int mostrarMenuPreciosYKM (double auxKm,double precio1,double precio2){

	int auxOpcion;
	int retorno;
	do{
			retorno=0;
			if (retorno==0){
				printf("\n\n=====================================\n");
				printf("=====================================\n");
				printf("========    MENU PRINCIPAL   ========\n");
				printf("=====================================\n");
				printf("=====================================\n");
				printf("\t1. INGRESAR KILOMETROS: KMs=%.2lf\n",auxKm);
				printf("\t2. INGRESAR PRECIO DE VUELOS: (AEROLINEAS=$%.2lf , LATAM=$%.2lf)\n",precio1,precio2);
				printf("\t3. CALCULAR TODOS LOS COSTOS\n");
				printf("\t4. INFORMAR RESULTADOS\n");
				printf("\t5. CARGA FORZADA DE DATOS\n");
				printf("\t6. SALIR DEL PROGRAMA\n");
				printf("-----------------------------------\n");
				printf("POR FAVOR, ELEGIR UNA OPCION: ");
				scanf("%d",&auxOpcion);
				retorno=validarRango(auxOpcion,1,6);
			}

			if (retorno==1)
			{
				printf("\nOPCION INCORRECTA. INGRESAR NUEVAMENTE.\n");
			}

	}while( retorno!=0);


	return auxOpcion;
}

int mostrarMenuPrecios (double auxKm,double precio1,double precio2){

	int auxOpcion;
	int retorno;
	do{
			retorno=0;
			if (retorno==0){
				printf("\n\n=====================================\n");
				printf("=====================================\n");
				printf("========    MENU PRINCIPAL   ========\n");
				printf("=====================================\n");
				printf("=====================================\n");
				printf("\t1. INGRESAR KILOMETROS \n");
				printf("\t2. INGRESAR PRECIO DE VUELOS: (AEROLINEAS=$%.2lf , LATAM=$%.2lf)\n",precio1,precio2);
				printf("\t3. CALCULAR TODOS LOS COSTOS\n");
				printf("\t4. INFORMAR RESULTADOS\n");
				printf("\t5. CARGA FORZADA DE DATOS\n");
				printf("\t6. SALIR DEL PROGRAMA\n");
				printf("-----------------------------------\n");
				printf("POR FAVOR, ELEGIR UNA OPCION: ");
				scanf("%d",&auxOpcion);
				retorno=validarRango(auxOpcion,1,6);
			}

			if (retorno==1)
			{
				printf("\nOPCION INCORRECTA. INGRESAR NUEVAMENTE.\n");
			}

	}while( retorno!=0);


	return auxOpcion;
}
