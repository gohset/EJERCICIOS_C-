// Diseñe un pseudocodigo que reciba como dato un estero X y calcule e imprima el
// resultado de la siguiente serie:

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=0,nt=0,nt2=0,mt=0,mt2=0,m=1,par=0,part=0,total=0;
	printf("Ingrese el numero: ");
	scanf("%i",& n);
	printf("\n");
	
	nt=n;
	for(m;m<=n;m++)
	{
		nt2=m%2;
		if(nt2==1)
		{
			mt=m*m;
			mt2=mt2+mt;
		}
		if(nt2==0)
		{
			par=m*m;
			part=part+par;
		}
		
	}
	total=mt2-part;
	printf("El resultado es: %i",total);
	
	getch();
}