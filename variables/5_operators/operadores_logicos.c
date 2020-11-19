#include <stdio.h> 
#include <stdlib.h>
/*
|| OR
&& AND
! NOT
*/
int main()
{ // Inicio

 system("clear"); // Limpia pantalla
 
 printf("!(1 != 1) devuelve %d que implica verdadero\n",!(1 != 1)); // !(0) =1
 printf("!(1 == 1) devuelve %d que implica falso\n",!(1 == 1)); //!(1) = 0
 printf("1 == 1 && 2 == 2 devuelve %d que implica verdadero\n",1 == 1 && 2 == 2);// 1 && 1 = 1
 printf("1 == 1 && 2 == 3 devuelve %d que implica falso\n",1 == 1 && 2 == 3);// 1 && 0 = 0
 printf("1 == 1 || 2 == 3 devuelve %d que implica verdadero\n",1 == 1 || 2 == 3); // 1 || 0 = 1
 printf("1 != 1 || 2 == 3 devuelve %d que implica falso\n",1 != 1 || 2 == 3); // 0 || 0 = 0
 printf("1 >= 1 || 2 <= 3 devuelve %d que implica verdadero\n",1 >= 1 || 2 <= 3); //1 || 1 = 1
 printf("1 >= 1 || 2 >= 3 devuelve %d que implica verdadero\n",1 >= 1 || 2 >= 3); // 1 || 0 = 1
 printf("'A' == 'A' devuelve %d que implica verdadero\n",('A' == 'A'));
 printf("'A' > 'B' devuelve %d que implica falso\n",('A' > 'B'));
 printf("'A' < 'B' devuelve %d que implica verdadero\n",('A' < 'B'));
 printf("'a' > 'A' devuelve %d que implica falso\n",('a' > 'A'));
 printf("'a' < 'A' devuelve %d que implica verdadero\n",('a' < 'A'));
 return 0;
} // Fin de programa
