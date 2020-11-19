#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad",edad);
	}
	else if (edad <= 17)
	{
		 printf("Tienes %d anios, eres menor de edad",edad);
	}
	else if (edad >= 35 && edad <= 60)
	{
		 printf("Tienes %d anios, eres chavo-ruco",edad);
	}
	else
	{
		 printf("Tienes %d anios, eres adulto mayor",edad);
	}
  return 0;
} 	
