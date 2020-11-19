#include <stdio.h> // Cabecera

int main() //Función principal
{
  int A ;

  printf("Introduce un numero: ");
  scanf("%d",&A);

  /*printf("Introduce tu edad: ");
  scanf("%d",&edad);*/

  //Esctrutura de selección simple
  if (A == 0){
    printf("El número %d es 0\n",A);
  }
  else if (A > 0){ // if anidado
    printf("El número %d es positivo\n",A);
  }
  else {
    printf("El numero %d es negativo\n",A);
  }
  printf("Fin de estructura de control\n");
  
  return 0;
}