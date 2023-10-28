/*8.	Desarrolle un PROGRAMA  que calcule el factorial de un número dado por teclado.
 Realizar el ejercicio utilizando un bucle For y  repetirlo con While*/
#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int n=0,cont=0;
int fc=0;
printf("Preferible que el numero sea menor a 8\n");
printf("Ingrese el numero:  ");
scanf("\n%i",& n);
cont=n-1;
fc=cont*n;
while(cont>1)
{
cont=cont-1;
fc=cont*fc;
}
printf("El factorial es: %i",fc);
getch();
}

