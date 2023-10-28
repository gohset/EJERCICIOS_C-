//Funcion strcat.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char destino[25];
char a[]="hola",c[]="c++",b[]="borland";
strcpy(destino,b);
strcat(destino,a);
strcat(destino,c);
printf("%s\n",destino);
getch();
}