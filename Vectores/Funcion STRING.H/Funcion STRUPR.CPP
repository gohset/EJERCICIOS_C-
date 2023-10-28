//Funcion STRUPR.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char a[]="hola bienvenidos";
printf("Antes strupr(): %s\n",a);
strupr(a);
printf("Ahora strupr(): %s\n",a);
getch();
}