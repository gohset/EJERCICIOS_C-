//Encontrar el n mayor de cada fila de una matriz 3*4.
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int a[3][4],j,i,m=0;
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.1 >>>>\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("Ingrese un numeros:  \n ");
scanf("%i",& a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]>m)
{
m=a[i][j];
}
}
printf("El mayor es: %i\n",m);
m=0;
}
getch();
}