// TP 1 Exercises Executor
#include <iostream>
#include <stdio.h>
#include "example.h"


int main() {
	int ejercicio;
	printf("-1 salir\n");
	printf("0_Ejemplo");
	printf("1_Ingresar dos valores enteros, sumarlos e imprimir esta suma.\n");
	printf("2_Ingresar tres valores, imprimir la suma total, solo se sabe sumar de a dos operandos por vez\n");
	printf("3_Ingresar tres valores, sumarlos e imprimir esa suma, se puede sumar de a varios operandos en la misma operacion\n");
	printf("4_Ingresar los lados de un triangulo, calcular su perimetro e imprimirlo\n");
	printf("5_Ingresar dos lados de un triangulo rectangulo y calcular, la hipotenusa, el perimetro, la superficie. Imprima los resultados solicitados\n");
	printf("6_Ingresar los lados de un rectangulo y calcular su diagonal principal, superficie y perímetro. Imprima los resultados solicitados.\n");
	printf("7_Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados\n");
	printf("8_Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo\n");
	printf("9_Ingresar el tiempo trabajado por un operario y considerando que el valor de la hora es de 10 pesos, calcular su sueldo e imprimirlo\n");
	printf("10_Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes mas un plus del 10 por ciento del precio sobre cada vehiculo vendido y un valor constante de 50 pesos por cada uno de ellos, se ingresa el valor del vehiculo y cuantos vehiculos de ese tipo vendio, calcular su sueldo e imprimirlo\n");

	printf("Seleccione un ejercicio: ");
	scanf("%d", &ejercicio);
	system("cls");
	switch (ejercicio)
	{
	case 0: Ejemplo();
	default:
		printf("Ejercicio no realizado: ");
		break;
	}
}