//  Leer los 250.000 votos otorgados a los 3 candidatos a alcalde de la cuidad de Leon e imprimir
//  el numero del candidato ganador y su cantidad de votos.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int vt=250000,vt2=0,vt3=0,ncandidatos=0,votos=0;
	int a[1],b[2];
	int n=0;
	int s=0;
	
	printf("\t\t\t CANDIDATOS\n\n");

	for(n;n<2;n++)
	{
	
	printf(" Candidato N [ %i ] \n",n+1);
	
	printf("Ingrese la cantidad de votos:  ");
	scanf("\n%i",& votos);
	vt3=vt3+votos;
	//b[n]=vt2;
	b[n]=votos;
	vt2=150000-vt3;
	a[n]=vt2;
	if(vt2<=0)
	{
		printf("A llegado al maximo de los votos\n");
	}
	
	}
	printf("Candidato N [ 3 ] : %i votos\n\n",vt2);
	//*************************************************************************
	
	int nu=0,cont=0,cont1=0,contt;
	for (int j=0;j<2;j++)
	{
	for(s;s<2;s++)
	{
	
		if (b[s]<b[s+1])
		{
			nu=b[s+1];
			b[s+1]=b[s];
			b[s]=nu;
			cont++;
		}
		
	}
	}
	
	if (vt2>b[0])
	{
		printf("El candidato Ganador es el N [ 3 ] con: %i votos",vt2);
	}
	else
	{
	contt=cont-cont1;
	
	printf("El candidato Ganador es el N [ %i ] con: %i votos",contt,b[0]);
	}
	
	//*************************************************************************
	
	
	
	getch();
}