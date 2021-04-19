// TP1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int hourly_rate, hours_worked, employee_number, wage;

#pragma region input

	printf("type the employee number: ");
	scanf("%d", &employee_number);
	printf("type hourly rate: ");
	scanf("%d", &hourly_rate);
	printf("type hours worked: ");
	scanf("%d", &hours_worked);

#pragma endregion

#pragma region Proccesing

	wage = hourly_rate * hours_worked;

#pragma endregion

#pragma region Output

	printf("The employee %d has a wage of %d", employee_number, wage);

#pragma endregion

	system("pause");
	return 0;
}

