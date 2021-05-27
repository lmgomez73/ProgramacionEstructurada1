#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>

#include "tp2.h"

int Exercise2() {
	int value;

	printf("Type value: ");
	scanf("%d", &value);

	if (value>0)
	{
		printf("Value is positive!");
	}
	else if(value <0)
	{
		printf("Value is negative!");
	}
	else
	{
		printf("Value is zero!");
	}
	return 0;
}