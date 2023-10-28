/*Presentacion de elementos de una matriz*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][5]={5,7,9,11,13,15,18,21,23,25};
for(int i=0;i<2;i++)
{
for(int j=0;j<5;j++)
{
printf("%i",a[i][j]);
}
printf("\n");
}
getch();
}