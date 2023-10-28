#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int b=0,a=0;
char n[20],n1[20];
printf("Ingrese la cadena\n");
gets(n);
strcpy(n1,n);
strrev(n);
puts(n);
b=strcmp(n,n1);
if(b==0)
{
printf("Es palindroma\n");
}
else
{
printf("No es palindroma\n");
}
getch();
}