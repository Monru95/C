#include <stdio.h>
#define num 10

int main()
{
	const int numero = 32;
	int variable = 12;
	
	printf("Valor de numero:%d\n", numero);
	printf("Valor de variable:%d\n", variable);
	printf("Valor de macro:%d\n", num);
	
	printf("\n\nCambiando valores...\n\n");

  //numero=10;
	variable=0;
	//#define num 300
		
	//printf("Nuevo valor de numero:%d\n", numero);
	printf("Nuevo valor de variable:%d\n", variable);
	printf("Nuevo valor de macro:%d\n", num);
	
  return 0;
}
