#include <stdio.h>

int main  ()
{
    /* SINTO URIBE OMAR
    EQUIPO 4
    21 ABR 21
    Programa 2. Pide dos valores reales, los suma & muestra resultado
    */

   int a, b, c;
   printf("\n \n \n \nPrograma 2 \n");
   printf("suma de numeros enteros \n");
   printf("\n \nDame el valor entero de a: ");
   scanf("%d",&a); //Si vas a recibir un valor entero usa %d
                //Para indicar la variable donde se guarda usa &variable
   printf("\n \nDame el valor entero de b:");
   scanf("%d",&b);
   c = a + b;
   printf("\n El resultado es %d",c);
   return 0;

}