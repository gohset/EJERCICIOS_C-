//Presentar la matriz cargada los n pares y el promedio general
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int a[3][4],j,i,n=0,pro=0,su=0;
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.0 >>>>\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("Ingrese un numeros:  \n ");
scanf("%i",& a[i][j]);
su=su+a[i][j];
}
}
pro=su/12;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
n=a[i][j]%2;
if(n==0)
{
printf("Es par:>>>> %i >>>>>\n",a[i][j]);
}
}
}
printf("\t\tEl promedio general es: %i\n",pro);
getch();
}