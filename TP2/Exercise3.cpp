#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>

#include "tp2.h"

int Exercise3() {
	int value1, value2;

	printf("Type first value: ");
	scanf("%d", &value1);
	printf("Type second value: ");
	scanf("%d", &value2);

	if (value1 == value2)
	{
		printf("Values are equals");
	}
	else if(value1 >value2)
	{
		printf("Product is: %d", value1*value2);
	}
	return 0;
}