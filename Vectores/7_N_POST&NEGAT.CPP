//  Elaborar un  algoritmo que lea 100 numeros y determine la media de los nueros
// pocitivos y negativos ingresados.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=0,p=0,ng=0,contp=0,contng=0;
	int mp=0,mng=0;
	for(int nn=1;nn<=100;nn++)
	{
	printf("Ingrese los 100 numeros, sean estos positivos o negativos: ");
	scanf("%i",& n);
	printf("\n");
	
	if(n>0)
	{
		p=p+n;
		contp++;
	}
	if(n<0)
	{
		ng=ng+n;
		contng++;
	}	
	
	}
	
	mp=p/contp;
	mng=ng/contng;
	printf("Total positivo %i\n",contp);
	printf("Total negativo %i\n",contng);
	
	printf("La media de los numeros negativos es: %i\n",mng);
	printf("La media de los numeros positivos es: %i\n",mp);
	
	
	getch();
}