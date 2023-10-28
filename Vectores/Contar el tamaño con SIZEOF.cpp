#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int tamanio=0,tam2=0;
int b[]={1,2,3,4,5,};
char nombre[]= "J Cazorla";
printf("%s\n\n",nombre);
printf("%c",nombre[0]);
printf("%c",nombre[1]);
printf("%c",nombre[2]);
printf("%c",nombre[3]);
printf("%c",nombre[4]);
printf("%c",nombre[5]);
printf("%c",nombre[6]);
printf("%c",nombre[7]);
printf("%c\n",nombre[8]);
tamanio=sizeof(nombre);
tam2=sizeof(b);
printf("%i\n",tamanio);
printf("%i\n",tam2);

getch();
}

