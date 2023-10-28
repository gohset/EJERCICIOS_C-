//Invertir los valores de una fila.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3];
int j,i;
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.4 >>>>\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Ingrese los numeros\n");
scanf("%i",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%i",a[i][j]);
}
putchar('\n');
}
putchar('\n');
for(i=0;i<3;i++)
{
for(j=2;j>=0;j--)
{
printf("\t%i",a[i][j]);
}
putchar('\n');
}
getch();
}