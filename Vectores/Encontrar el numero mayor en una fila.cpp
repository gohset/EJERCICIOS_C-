/*Encontrar el numero mayor de cada una de las filas de una matriz 3*4*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][4],n;
for(int i=0;i<=3;i++)
{
for(int j=0;j<4;j++)
{
printf("Ingrese los numeros: \n");
scanf("%i",& a[i][j]);
}
}
for(int i=0;i<=3;i++)
{
for(int j=0;j<4;j++)
{
for(int r=0;r<4;r++)
{
if(a[i][j]>a[i][j+1])
{
n=a[i][j];
}
printf("El numero mayor es:\t%i",n);
}
printf("\n");
}
}
getch();
}
