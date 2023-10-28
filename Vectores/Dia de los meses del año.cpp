/*Cargar un vector con los dias de cada mes del año Ingresar
un numero del mes y precentar la cantidad de dias que tiene*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int nd=0;
int m[3]={31,30,28};
for(int i=1;i<=3;i++)
{

}
printf("Ingrese el numero del mes: \n");
scanf("%i",& nd);
if(nd==1)
{
printf("ENERO < %i >",m[0]);
}
else if(nd==2)
{
printf("FEBRERO < %i >",m[2]);
}
else if(nd==3)
{
printf("MARZA < %i >",m[0]);
}
else if(nd==4)
{
printf("ABRIL < %i >",m[1]);
}
else if(nd==5)
{
printf("MAYO < %i >",m[0]);
}
else if(nd==6)
{
printf("JUNIO < %i >",m[1]);
}
else if(nd==7)
{
printf("JULIO < %i >",m[0]);
}
else if(nd==8)
{
printf("AGOSTO < %i >",m[0]);
}
else if(nd==9)
{
printf("SEPTIEMBRE < %i >",m[1]);
}
else if(nd==10)
{
printf("OCTUBRE < %i >",m[0]);
}
else if(nd==11)
{
printf("NOVIEMBRE < %i >",m[1]);
}
else
{
printf("DICIEMBRE < %i >",m[0]);
}
getch();
}

