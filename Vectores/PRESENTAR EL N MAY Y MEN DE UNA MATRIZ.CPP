//Cargar una matriz 3*2
/*Presente la matriz y presentar el mayor y
menor valor de la matriz y su posicion*/
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int a[3][2],j,i,n=0,l2,l,m=0,m2=0;
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.2 >>>>\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("Ingrese un numeros:  \n ");
scanf("%i",& a[i][j]);
}
}
/*********************************************/
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
/********************************************/
j=0;
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
for(int e=0;e<6;e++)
{
if(a[i][j]>m)
{
m=a[i][j];
j=j+1;
}
}
}
}
/*******************************************/
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
n=a[i][j];
for(int t=0;t<6;t++)
{
if(n<a[i][j+1])
{
a[i][j+1]=n;
n=a[i][j+1];
j=j+1;
}
}
}
}
/******************************************/
printf("El mayor es: %i\n",m);
printf("El menor es: %i\n",n);
getch();
}