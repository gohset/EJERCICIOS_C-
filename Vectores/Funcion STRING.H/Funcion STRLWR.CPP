//Funcion STRLWR.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char a[]="HOLA ESTE ES MI PROGRAMA";
printf("Antes strlwr(): %s\n",a);
strlwr(a);
printf("Ahora strlwr(): %s\n",a);
getch();
}