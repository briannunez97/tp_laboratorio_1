#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "getData.h"
#include "informaResultados.h"
#include "validacion.h"

#define BITCOIN 4606954.55
#define DESCUENTO_DEBITO 0.10
#define INTERES_CREDITO 0.25


int main(void) {
	setbuf(stdout, NULL);

	int opcionMenu,auxMenuKm,auxMenuPrecios,auxCalculo,auxCargaForzada;
	double preAereo,preLatam;
	double km;
	double a_preDeb,a_preCre,a_preBit,a_preUnitario;
	double l_preDeb,l_preCre,l_preBit,l_preUnitario;

	preAereo=-1;
	preLatam=-1;
	km=-1;
	auxMenuKm=-1;
	auxMenuPrecios=-1;
	auxCalculo=-1;
	auxCargaForzada=-1;
	do {

		if(auxCargaForzada==-1){
			if(auxMenuKm==0 && auxMenuPrecios==-1 ){
				opcionMenu=mostrarMenuKM(km);
			}
			if(auxMenuKm==0 && auxMenuPrecios==0){

				opcionMenu=mostrarMenuPreciosYKM(km,preAereo,preLatam);

			}
			if(auxMenuKm==-1 && auxMenuPrecios==0){

				opcionMenu=mostrarMenuPrecios(preAereo,preLatam);
			}
			if(auxMenuKm==-1 && auxMenuPrecios==-1){
				opcionMenu=mostrarMenuVacio();
			}
		}
		if(auxCargaForzada==0){
			opcionMenu=mostrarMenuVacio();
		}

		switch(opcionMenu) {
			case 1:
				km=getValor(0,"\nINGRESAR KILOMETROS: ","\nNO SE PERMITEN INGRESAR VALORES NEGATIVOS. INGRESAR KILOMETROS NUEVAMENTE.\n");
				printf("\nLA CANTIDAD DE KILOMETROS FUERON INGRESADOS CORRECTAMENTE. \n");
				auxMenuKm=0;
				auxCargaForzada=-1;
				break;


			case 2:
				printf("\nINGRESAR PRECIO DE VUELOS\n");
				preAereo=getValor(0,"\tINGRESAR PRECIO DE VUELO AEROLINEAS: ","\nNO SE PERMITEN INGRESAR VALORES NEGATIVOS. INGRESAR PRECIO NUEVAMENTE.\n");
				preLatam=getValor(0,"\tINGRESAR PRECIO DE VUELO LATAM: ","\nNO SE PERMITEN INGRESAR VALORES NEGATIVOS. INGRESAR PRECIO NUEVAMENTE.\n");
				auxMenuPrecios=0;
				auxCargaForzada=-1;
				break;

			case 3:

				if(preAereo==-1 || preLatam==-1 || km==-1)
				{
					printf("\nLOS PRECIOS Y/O LOS KILOMETROS NO FUERON INGRESADOS . POR FAVOR, INGRESAR TODOS LOS DATOS NECESARIOS PARA PODER SELECCIONAR ESTA OPCION.\n");
					break;
				}
				else {
					calculaCostos(km,preAereo,&a_preDeb,&a_preCre,&a_preBit,&a_preUnitario,DESCUENTO_DEBITO,INTERES_CREDITO,BITCOIN);
					calculaCostos(km,preLatam,&l_preDeb,&l_preCre,&l_preBit,&l_preUnitario,DESCUENTO_DEBITO,INTERES_CREDITO,BITCOIN);
					printf("\nLOS COSTOS FUERON CALCULADOS CORRECTAMENTE.\n");
					auxCalculo=0;
					auxCargaForzada=-1;
					break;
				}

			case 4:

				if(auxCalculo==0){
					printf("\nKMs INGRESADOS: %.2lf Km\n\n",km);
					informarResultado("PRECIO AEROLINEAS: $",preAereo);
					informarResultado("\n\t A) PRECIO CON TARJETA DE DEBITO: $",a_preDeb);
					informarResultado("\n\t B) PRECIO CON TARJETA DE CREDITO: $",a_preCre);
					informarResultado("\n\t C) PRECIO PAGANDO CON BITCOIN: ",a_preBit);
					printf(" BTC");
					informarResultado("\n\t D) PRECIO UNITARIO: $",a_preUnitario);
					informarResultado("\n\nPRECIO LATAM: $",preLatam);
					informarResultado("\n\t A) PRECIO CON TARJETA DE DEBITO: $",l_preDeb);
					informarResultado("\n\t B) PRECIO CON TARJETA DE CREDITO: $",l_preCre);
					informarResultado("\n\t C) PRECIO PAGANDO CON BITCOIN: ",l_preBit);
					printf(" BTC");
					informarResultado("\n\t D) PRECIO UNITARIO: $",l_preUnitario);
					if(preAereo>preLatam){

						informarResultado("\n\nLA DIFERENCIA DE PRECIO ES: $",resta(preAereo,preLatam));
					}
					else{

						informarResultado("\n\nLA DIFERENCIA DE PRECIO ES: $",resta(preLatam,preAereo));
					}
					auxCargaForzada=-1;
				}
				if(auxCalculo==-1){

					printf("\nCOSTOS SIN CALCULAR. PRIMERO DEBE SELECCION LA OPCION 3.\n");
				}

				break;

			case 5:

				auxMenuKm=-1;
				auxMenuPrecios=-1;
				auxCalculo=-1;
				auxCargaForzada=0;
				km=7090;
				preAereo=162965;
				preLatam=159339;
				calculaCostos(km,preAereo,&a_preDeb,&a_preCre,&a_preBit,&a_preUnitario,(double)DESCUENTO_DEBITO,(double)INTERES_CREDITO,(double)BITCOIN);
				calculaCostos(km,preLatam,&l_preDeb,&l_preCre,&l_preBit,&l_preUnitario,(double)DESCUENTO_DEBITO,(double)INTERES_CREDITO,(double)BITCOIN);


				printf("\nKMs INGRESADOS: %.2lf Km\n\n",km);
				informarResultado("PRECIO AEROLINEAS: $",preAereo);
				informarResultado("\n\t A) PRECIO CON TARJETA DE DEBITO: $",a_preDeb);
				informarResultado("\n\t B) PRECIO CON TARJETA DE CREDITO: $",a_preCre);
				informarResultado("\n\t C) PRECIO PAGANDO CON BITCOIN: ",a_preBit);
				printf(" BTC");
				informarResultado("\n\t D) PRECIO UNITARIO: $",a_preUnitario);
				informarResultado("\n\nPRECIO LATAM: $",preLatam);
				informarResultado("\n\t A) PRECIO CON TARJETA DE DEBITO: $",l_preDeb);
				informarResultado("\n\t B) PRECIO CON TARJETA DE CREDITO: $",l_preCre);
				informarResultado("\n\t C) PRECIO PAGANDO CON BITCOIN: ",l_preBit);
				printf(" BTC");
				informarResultado("\n\t D) PRECIO UNITARIO: $",l_preUnitario);
				if(preAereo>preLatam){

					informarResultado("\n\nLA DIFERENCIA DE PRECIO ES: $",resta(preAereo,preLatam));
				}
				else{

					informarResultado("\n\nLA DIFERENCIA DE PRECIO ES: $",resta(preLatam,preAereo));
				}
				km=-1;
				preAereo=-1;
				preLatam=-1;

				break;
		}



	}while (opcionMenu!=6);

printf("\n===================================\n");
printf("===================================\n");
printf("===== SALIENDO DEL PROGRAMA. ======\n");
printf("===================================\n");
printf("===================================\n");
	return 0;
}












