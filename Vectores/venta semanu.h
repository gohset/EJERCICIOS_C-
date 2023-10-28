#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int tvs=0;
int vd[7];
printf(">>>>>>>>>>> INGRESO <<<<<<<<<<<\n");
for(int i=0;i<=6;i++)
{
printf("DIA %i\n",i);
scanf("%i",& vd[i]);
tvs=tvs+vd[i];
}
printf("<<<<<<<<<<< PRESENTACION >>>>>>>>>>\n");
for(int i=0;i<=6;i++)
{
printf("DIAS %i:%i\n",i,vd[i]);

}

printf("El total de las ventas semanal es: %i\n",tvs);
getch();
}
