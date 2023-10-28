//  Realice  un programa que lea enteros positivos hasta que se introdusca un 0.
//  El programa debera mostrar por pantalla la cantidad de numeros leidos, la 
//  media asi como el valor maximo introducido.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=0,n1=0,n2=0,a[10000],cont=0;
	float media=0,su=0;
	
	for(n;n<10000;n++)
	{
		printf("Ingrese un numero entero pocitivo: ");
	scanf("%i",&n1);
	cont++;
	a[n]=n1;
	su=su+n1;
	if(n1==0)
	{
		n=10000;
		
	}
	}
	printf("\n\n\tTotal elementos: [ %i ]\n",cont-1);
	media=su/(cont-1);
	printf("\tLa sumatoria total es: %.0f\n",su);
	printf("\tLa media de los numeros dados es: [ %.2f ]\n",media);
	for(int setoga=0;setoga<200;setoga++)
	{
	for(int set=0;set<1000;set++)
	{
		if(a[set]<a[set+1])
	{
		n2=a[set+1];
		a[set+1]=a[set];
		a[set]=n2;
	}
	}
	}
	
	printf("\tEl valor maximo introducido es: [ %i ]",a[0]);
	
	
	getch();
}