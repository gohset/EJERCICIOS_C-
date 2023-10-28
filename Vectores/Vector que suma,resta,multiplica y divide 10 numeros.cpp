/*Crear un vector que lea 10 numeros por teclado los almacene en un arreglo 
y muestre la suma,resta,multiplicacion y la divicion de todos los numeros*/

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num[10];
int su=0,res=0,mul=1;
float div=1;
for(int i=0;i<10;i++)
{
printf("Posicion: %i\n",i+1);
printf("Ingrese un numero: \n");
scanf("%i",& num[i]);
}
for(int i=0;i<10;i++)
{
su=su+num[i];
res=num[i]-res;
mul=mul*num[i];
div=num[i]/div;
}
printf("<<<<<<< La suma es <<<<<<<<<<<>>>>>>: %i\n",su);
printf(">>>>>>> La resta es >>>>>>>>><<<<<<<: %i\n",res);
printf(">>>>>>> La multiplicacion es <<<<<<<: %i\n",mul);
printf(">>>>>>> La division es >>>>>><<<<<<<: %f\n",div);
getch();
}
