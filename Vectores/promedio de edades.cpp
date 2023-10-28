/*Realizar un arreglo para reguistrar la edad de los estudiantes de 2º
Semestre.Presentar el promedio de edad de dicho curso*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int su=0,pro=0;
int ed[30];
for(int i=0;i<=29;i++)
{
printf("Estudiante numero: %i\n",i);
printf("<<<<<<<<< Ingrese la edad >>>>>>>>>>>\n");
scanf("%i",& ed[i]);
su=su+ed[i];
}
for(int i=0;i<=29;i++)
{
printf("<<<<<<<<<< Las edades son >>>>>>>>> %i......%i\n",i,ed[i]);
}
pro=su/30;
printf("El promedio de edades es: %i\n",pro);
getch();
}
