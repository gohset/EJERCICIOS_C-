//  Cierta Universidad tiene N estudiante. Elabore un algoritmo que encuentre el promedio de 
//  edad de los estudiantes mayores de 21 años y el promedio de edad del resto de estudiantes.
//  Por cada estudiante se tiene un registro que contiene su codigo y edad..

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int codigo=1, nestudiante=0, edad=0,pedad1=0,pedad2=0;
	int acu1=0,acu2=0,cont=1,cont1=0,cont2=0,a=0;
	
	printf("Ingrese el numero total de Estudiantes:   ");
	scanf("%i",& nestudiante);
	
	for(cont;cont<=nestudiante;cont++)
	{
		
	printf("Codigo: SET0%i\t Ingrese la edad :  ",codigo);
	scanf("%i",& edad);
	printf("\n");
	codigo++;
	if (edad<21)
	{
		acu2=acu2+edad;
	cont2++;
	}
	if (edad>=21)
	{
		acu1=acu1+edad;
		cont1++;
	}
	
	}
	
	pedad1=acu1/cont1;
	pedad2=acu2/cont2;
	
	printf("\tPrecione una tecla para continuar . . .");
	getch();
	clrscr();
	printf("Los mayores de 21 anios son:  %i \tLa edad promedio es: %i\n",cont1,pedad1);
	printf("Los menores de 21 anios son:  %i \tLa edad promedio es: %i\n",cont2,pedad2);
	
	getch();
}