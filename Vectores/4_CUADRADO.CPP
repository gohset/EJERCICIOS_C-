//  Elabore un algoritmo que obtenga elcuadrado de los primero N numeros enteros.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=0,nn=0,s=0,n2=0;
	printf("Cuantos numeros decea ingresar ");
	scanf("\n%i",&n);
	for(nn;nn<=n;nn++)
	{
		printf("Ingrse el numero: ");
		scanf("\n%i",&n2);
		s=n2*n2;
		printf("El cuadrado del numero es: %i\n",s);
	}
	
	
	getch();
}