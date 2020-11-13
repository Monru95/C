#include<stdio.h>
#include <math.h>

float a, b, c;//Declaro variables
int a1, b1, c1;
int main()
{
	printf("Dame el \'primer\' numero:");
  	scanf("%f",&a);  

  printf("Dame el \'segundo\' numero:");
	  scanf("%f",&b);
  
  printf("Suma\n");
    c = a + b; //Suma o adicion
    printf ("\t%0.2f + %0.2f = %0.2f\n",a, b, c);

  printf("Resta\n");
   c = a - b; //Resta
    printf ("\t%0.2f - %0.2f = %0.2f\n",a, b, c);

  printf("Multiplicacion\n");
    c = a * b; //Multiplicacion
    printf ("\t%0.2f * %0.2f = %0.2f\n",a, b, c);

  printf("Division\n");
   c = a / b; //Division
    printf ("\t%0.2f / %0.2f = %0.2f\n",a, b, c);

  printf("Modulo\n");
    a1= a;
    b1= b;
    c1 = a1 % b1; //Modulo
    printf ("\tEl modulo de  %d / %d = %d\n",a1, b1, c1);
  
  printf("Raiz cuadrada\n"); 
    printf("La raiz cuadrada de %0.2f es:%0.2f\n", a, c);
   c= sqrt(a); //Raiz cuadrada a
   printf("La raiz cuadrada de %0.2f es:%0.2f\n", b, c);
   c = sqrt(b); //Raiz cuadrada b

  printf("Potencia\n");
		c = pow(a, b); //Potencia a
	  printf("\tEl numero %0.2f elevado a la potencia %0.2f es %0.2f\n",a,b,c);
    c = pow(b, a); //Potencia b
	  printf("\tEl numero %0.2f elevado a la potencia %0.2f es %0.2f\n",b,a,c);

  return 0;
}
  
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,d, e;
int a1, b1;
int main()
{
	system("clear");


	a1 = a;
	
	b1 = b;

	printf("Suma\n");
		c=a+b; // Suma o adiciÃ³n
		printf("\t%f + %f = %f\n",a,b,c);
	printf("Resta\n");
		c=a-b; // Resta o diferencia
		printf("\t%f - %f = %f\n",a,b,c);
	printf("MultiplicaciÃ³n\n");
		c=a*b; // MultiplicaciÃ³n o producto
		printf("\t%f * %f = %f\n",a,b,c);
	printf("DivisiÃ³n\n");
		c=a/b; // DivisiÃ³n o cociente tipo real
		printf("\t%f / %f = %f\n",a,b,c);
	printf("MÃ³dulo\n");
		c=a1%b1; // Resto o mÃ³dulo
		printf("\tEl mÃ³dulo de %d/%d es %f\n",a1,b1,c);
	printf("RaÃ­z cuadrada del primer numero\n");
		c=sqrt(a); // RaÃ­z cuadrada
		printf("\tLa RaÃ­z cuadrada de %f es %f\n",a,c);
	printf("RaÃ­z cuadrada del segundo numero\n");
		c=sqrt(b); // RaÃ­z cuadrada
		printf("\tLa RaÃ­z cuadrada de %f es %f\n",b,c);
	printf("Potencia\n");
		c = pow(b, a); //Potencia
	printf("\tEl nÃºmero %f elevado a la potencia %f es %f\n",b,a,c);
	
	printf("Resultado del reto viral de Agosto\n");

	c = a/(b*(b+b));
	d = a/b*(b+b);
	printf("\tEl resultado de %f/(%f(%f+%f))es %f\n",a,b,b,b,c);
		printf("\tEl resultado de %f/%f(%f+%f)es %f\n",a,b,b,b,d);
return 0;
}*/

