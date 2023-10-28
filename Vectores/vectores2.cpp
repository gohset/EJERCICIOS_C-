/*
 vector utilizando la estructura for 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int vector[10]={4,6,45,76,89,1,23,45,5,7};
int j;
for(j=0;j<=9;j++)
printf("%8i\n%17i\n",j,vector[j]);
getch();
}
