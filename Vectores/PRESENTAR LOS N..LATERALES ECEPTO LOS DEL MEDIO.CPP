/*Presentacion de los numeros laterales
..................ecepto los del medio*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
int a[3][3];
int i,j;
printf("\t\t \t\tPROGRAM <<<< SET 1.0.6 >>>>\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Ingrese los numeros\n");
scanf("%i",& a[i][j]);
}}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
{
j=0;
for(int p=0;p<1;p++)
{
printf("\t%i",a[i][j]);
j=2;
for(int s=0;s<1;s++)
{
printf("\t\t%i",a[i][j]);
}
}
printf("\n");
}
getch();
}

