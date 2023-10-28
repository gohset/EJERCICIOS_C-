//La funcion putchar utilizando el for.
#include <stdio.h>
#include<conio.h>
void main ()
{
clrscr();
char ch;
for(ch = 'A' ; ch <= 'Z' ; ch++) 
{
putchar(32);
putchar(ch);
}
getch();
}
