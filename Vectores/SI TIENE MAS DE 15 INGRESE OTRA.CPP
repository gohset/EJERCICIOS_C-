/*Ingrese una cadena de texto.- Si la cadena tiene más de 15
caráctere, ingrese otra cadena y ver si son iguales o no.......y
presente la cantidad de carácteres*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char a[15];
char b[30];
int t,r;
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.5 >>>>\n");
printf("Ingrese una cadena\n");
gets(a);
r=strlen(a);
if(r>15)
{
printf("Ingrese otra cadena\n");
gets(b);
if(t=strcmp(a,b))
{
printf("Son iguales\n");
}
else
{
printf("No son iguales\n");
}
}
printf("%i",r);
getch();
}