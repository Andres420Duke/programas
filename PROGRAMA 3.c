#include <stdio.h>

int main  ()
{
    /* SINTO URIBE OMAR
    EQUIPO 4
    21 ABR 21
    Programa 3. Pide dos v"alores reales, calcula promedio y muestra resultado
    */
   float primer, segundo, tercero;
   printf ("\n\n Programa 3");
   printf ("\n\n Saca el promedio de valores reales");
   printf ("\n\n Dame el primer valor real");
   scanf ("%f",&primer); //permite capturar un valor real y lo que guarda en variable primer
   printf ("\n\n Dame el segundo valor real");
   scanf ("%f",segundo); //permite capturar un valor real y lo guarda en variable primer 
   tercero = (primer + segundo)/2;
   printf ("\n El promedio es %f",tercero);
   return 0;
}