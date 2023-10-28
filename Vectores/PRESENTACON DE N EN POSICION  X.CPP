//Cargar una matriz 5*5 y presentar los numeros en X.
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int a[5][5],j,i,m=0;
printf("\t\t \t\tPROGRAM <<<< SET 1.0.3 >>>>\n");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("Ingrese un numeros:  \n ");
scanf("%i",& a[i][j]);
}
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
j=0;
for(i=0;i<5;i++)
{
for(int r=0;r<5;r++)
{
m=a[i][j];
}
printf("Los numeros en X son: %i\n ",m);
j++;
m=0;
}
getch();
}