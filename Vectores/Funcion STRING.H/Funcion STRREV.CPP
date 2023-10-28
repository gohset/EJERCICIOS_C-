//Funcion STRREV.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char a[]="hola";
printf("Antes strrev(): %s\n",a);
strrev(a);
printf("Ahora strrev(): %s\n",a);
getch();
}