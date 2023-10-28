
/*Realizar un programa que calcule los resultados de un pueblo x:

a) Calcular y presentar  el   total  de  votos    resibidos por cada candidato
y procentaje total de los votos emitidos. Asi mismo presente al candidato
más votado.
b) Si algun  candidato tuviece  más del   50%   de  los  votos,  el programa
presenta un mensaja declarandolo GANADOR.
c) Si ningun candidato tuviece más  de  50%  de  los  votos, el    programa
presenta el nombre de los 2 más votados, los cuales pasarán a la segunda
vuelta de las elecciones*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,su=0,z=0,pro=0,c=0;
int a[4][5];
float b[4];
printf("\t\t \tPROGRAM <<<< SET 1.1.2 >>>>\n");
for(j=0;j<4;j++)
{
printf("candidato %i\n",j+1);
for(i=0;i<5;i++)
{
printf("Ingrese la cantidad de votos:  ");
scanf("%i",& a[j][i]);
}
}
clrscr();
c=0;
printf("\t\t  CADIDATOS\n");
printf("\t\tA \t B \t C \t D\n");
printf("\t\t___________________________\n");
for(i=0;i<5;i++)
{
c++;
printf("Distrito %i:",c);
for(j=0;j<4;j++)
{
printf("\t%i",a[j][i]);
}
printf("\n");
}
printf("\n");
for(z='A';z<='D';z++)
{
}
c=0;
su=0;
z='A';
for(j=0;j<4;j++)
{
printf("candidato   ");
putchar(z);
for(i=0;i<5;i++)
{
su=su+a[j][i];
}
b[j]=su;
printf(" < %i >",su);
su=0;
z++;
printf("\n");
}
//...............................
printf("\n");
float k=0,kao[4];
float ko[4],nt=0;
for(j=0;j<4;j++)
{
	k=b[0]+b[1]+b[2]+b[3];
	ko[j]=b[j]*100/k;
	printf("Candidato N %i\tProcentaje %f % ",j+1,ko[j]);
	kao[j]=ko[j];
	
	printf("\n");
	
}

for(j=0;j<4;j++)
{
if(kao[j]>50)
{
	printf("El Candidato %i es el ganador",j+1);
}

	else
	{
		for(int ku=0;ku<4;ku++)
		{
	for(j=0;j<4;j++)
{	
	 if(kao[j]<kao[j+1])
	{
		nt=kao[j+1];
		kao[j+1]=kao[j];
		kao[j]=nt;
		
	}
}
}
printf("\n");
printf("Los mas votados son:\n");
printf("El de: %f ...y;\nEl de: %f",kao[1],kao[2]);
printf("\n\nVAN A NUEVAS ELECCIONES.....");

}
}



getch();
}