/*Escriba un programa que combierta los numeros romanos
(en forma de cadena de caracteres) en numeros arabigos*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int c=0,su=0,i,nu=0;
char b[10];
int m=1000,d=500,e=100,l=50,x=10,v=5,o=1;
printf("\t\t \t\tPROGRAM <<<< SET 1.0.7 >>>>\n\n");
printf("\t\t<<<<< PRESENTACION DE ..NU. ROMANOA A ..NU. ARAVICOS >>>>>\n\n");
printf("\t\t\tM......D....C.....L.....X.....V.....I\n");
printf("\t\t\tp(1).p(2).,p(3)..p(4)..p(5)..p(6)..p(7)\n\n");
printf("\t<<<<< Primeramente espesifique cuantos caracteres desea ingresar >>>>>\n");
scanf("%i",& c);
if(c<=0)
{
printf("ERROR");
}
if(c==1)
{
for(i=1;i<=c;i++)
{
printf("Ingrese la letra\n");
scanf("%s",& b);
printf("Ingresa la posicion de la letra << es necesario >>\n");
scanf("%i",& nu);
if(nu==1)
{
printf("\t\t%i",m);
}
else if(nu==2)
{
printf("\t\t%i",d);
}
else if(nu==3)
{
printf("\t\t%i",e);
}
else if(nu==4)
{
printf("\t\t%i",l);
}
else if(nu==5)
{
printf("\t\t%i",x);
}
else if(nu==6)
{
printf("\t\t%i",v);
}
else if(nu==7)
{
printf("\t\t%i",o);
}
}
}
if(c==2)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==3)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>   ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==4)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==5)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==6)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==7)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==8)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==9)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==10)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==11)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==12)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==13)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==14)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
if(c==15)
{
for(int i2=1;i2<2;i2++)
{
printf("Ingrese las letra\n");
scanf("%s",& b);
for(i=1;i<=c;i++)
{
printf("Ingresa la posicion de la letra << es necesario >>  ");
scanf("\n%i",& nu);
if(nu<=0)
{
printf("ERROR\n");
}
else if(nu==1)
{
su=su+m;
}
else if(nu==2)
{
su=su+d;
}
else if(nu==3)
{
su=su+e;
}
else if(nu==4)
{
su=su+l;
}
else if(nu==5)
{
su=su+x;
}
else if(nu==6)
{
su=su+v;
}
else if(nu==7)
{
su=su+o;
}
else
{
printf("ERROR\n");
}
}
}
printf("\n");
printf("\t\t\t>>>> LA SUMA ES <<<< [ %i ]",su);
}
getch();
}