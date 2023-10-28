/*Una agencia de venta de  vehículos  automoviles distribulle  15  modelos
diferentes y tiene en su plantilla 10 vendedores. se desea un programa que
esriba un informe mensual de  las  ventas vendedor  y modelo, asi como el 
número de automoviles  vendidos  por cada vendedor y el número total de
cada  modelo  vendido  por  los  vendedores.  Así  mismo, para entregar el 
premio al  mejor  vendedor, necesita  saber  cual  es  el  vendedor que más
coches  a vendido*/

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][5],b[4];
int i,j,su=0,l=1,l2=0,m=0;
printf("\t\t \t\tPROGRAMA <<<< SET 1.1.1 >>>>\n");
printf("\t\t\tInforme mensual\n");
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
printf("Vendedor %i\n Ingrese la cantidad \n",i+1);
scanf("%i",& a[i][j]);
}
}
printf("\n");
l=0;
for(i=0;i<4;i++)
{
l++;
printf("Vendedor %i:",l);
for(j=0;j<5;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
printf("\n");
l=0;
su=0;
printf("\t\t\tSuma total de los vendedores\n");
printf("\t\t\t************************\n");
for(i=0;i<4;i++)
{
l++;
printf("Vendedor %i:",l);
for(j=0;j<5;j++)
{
su=su+a[i][j];
}
b[i]=su;
printf("< %i >",su);
su=0;
printf("\n");
}
printf("\t\t\tTotal modelo vendidos\n");
printf("\t\t\t************************\n");
l=0;
for(j=0;j<5;j++)
{
l++;
printf("Total modelo %i:",l);
for(i=0;i<4;i++)
{
su=su+a[i][j];
}
printf("%i\n",su);
su=0;
}
printf("\t\t\t    Vendedor ganador\n");
printf("\t\t\t************************\n");
l=0;
l2=0;
for(i=0;i<4;i++)
{
if(b[i]>m)
{
m=b[i];
l=l+l2;
l++;
}
else
{
l2++;
}
}
printf("Vendedor %i:",l);
printf("es el ganador al premio mejor vendedor: %i\n",m);
getch();
}