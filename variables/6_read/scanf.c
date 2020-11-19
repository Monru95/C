#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
int r;
float d, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);
d=(2*PI)*r; // Formula de diametro
a=PI*pow(r,2) ; // Formula de area de circulo
printf("El diametro de la circunferencia vale %0.2f\n", d);
printf("El área del círculo vale %0.2f\n", a);
}
