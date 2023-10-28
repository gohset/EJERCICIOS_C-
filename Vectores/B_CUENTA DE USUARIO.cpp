//Cuenta de usuario
/*Realice un ingreso de usuario y de contraceña sin diferencia entre mayusculas y 
minusculas. Si los datos ingresados son correctos presentar un mensaje que diga
"Bienvenido al sistema ", caso contrario "Usuario incorrecto"*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int b=0,d=0;
char us[]={"gonzales"};
char cot[]={"omar"};
char s[20],c[10];
printf("Ingrese el nombre de usuario\n");
gets(s);
printf("Ingrese la contracenia\n");
gets(c);
b=strcmp(us,s);
d=strcmp(cot,c);
if(b==0 && d==0)
{
printf("BIENVENIDO AL SISTEMA");
}
else
{
printf("USUARIO INCORECTO");
}
getch();
}