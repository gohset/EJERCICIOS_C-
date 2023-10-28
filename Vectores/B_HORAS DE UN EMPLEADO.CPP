/*Diceñar un programa que determine la media (o promedio) del número 
de horas trabajadas durante todos los días de la semana para cada uno de
la   Universidad,  asumiendo   que   el    número   de   empeados  es   10 */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,su=0,pro=0,k=0;
int a[10][5],b[10];
printf("\t\t \t\tPROGRAMA <<<< SET 1.1.2 >>>>\n");
for(i=0;i<10;i++)
{
printf("Empleado %i\n",i+1);
for(j=0;j<5;j++)
{
printf("Ingrese las horas diarias:  ");
scanf("%i",& a[i][j]);
}
}
k=0;
for(i=0;i<10;i++)
{
k++;
printf("Empleado %i: ",k);
for(j=0;j<5;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
printf("\t\t\t      Total horas\n  ");
printf("\t\t**********************************************\n");
k=0;
su=0;
for(i=0;i<10;i++)
{
k++;
printf("\t\t\tEmpleado %i: ",k);
for(j=0;j<5;j++)
{
su=su+a[i][j];
}
b[i]=su;
printf("%i",su);
su=0;
printf("\n");
}
printf("\t\t\t Promedio de horas por cada Empleado\n  ");
printf("\t\t**********************************************\n");
k=0;
pro=0;
for(i=0;i<10;i++)
{
k++;
printf("\t\t\tEmpleado %i: ",k);
for(int x=0;x<1;x++)
{
pro=b[i]/5;
}
printf("%i",pro);
pro=0;
printf("\n");
}
getch();
}