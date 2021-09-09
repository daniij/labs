#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <locale.h>

int   main()
{
	float a, b, c; 	// стороны треугольника 
	float  p, s; 		// полупериметр и площадь треугольника 
	setlocale(LC_ALL, "Rus"); // для вывода кириллицы
	printf("\n Введите значения сторон треугольника: ");
	scanf_s("%f %f %f", &a, &b, &c); 	// ввод значений а, b, c  
	if (a >= b + c || b >= a + c || c >= a + b)
		printf("Неверные данные");
	else
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Площадь треугольника = %f", s);
	}
	return 0;
}
