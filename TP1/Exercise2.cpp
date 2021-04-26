#include <stdio.h>
#include<iostream>

#include "exercises.h"
int Exercise2() {
	int first_value, second_value, sum;

	printf("Type first value");
	scanf("%d", &first_value);

	printf("Type second value");
	scanf("%d", &second_value);

	sum = first_value + second_value;

	printf("The sum is %d\n", sum);

	system("pause");
	return 0;
}