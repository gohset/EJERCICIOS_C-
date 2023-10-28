//Funcion STRCMP.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char a[]="aaa",b[]="bbb",c[]="ccc";
int t;
t=strcmp(a,b);
if(t>0)
{
printf("Buffer o (memoria) 2 es mas grande que la 1\n");
}
else
{
printf("Memoria 2 es mas peque¤a que la 1\n");
}
t=strcmp(b,c);
if(t>0)
{
printf("Memoria 2 es mas grande que la 3\n");
}
else
{
printf("Memoria 2 es mas peque¤a que la 3\n");
}
getch();
}