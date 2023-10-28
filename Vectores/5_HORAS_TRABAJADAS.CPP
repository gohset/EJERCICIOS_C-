//  Determinar la cantidad semanal de dinero que recibira cada uno de los N obreros de una  empresa.
//  Se sabe que cuando las horas que trabajo un obrero exceden de 40, el resto se convierte en horas 
//  extras que se pagan al doble de una hora normal, cuando no exceden de [] 8 [] ;; cuando las horas 
//  extras exceden de [] 8 []  se pagan las prineras [] 8 [] al doble de lo que se paga por una normal y el
//  resto al triple.

#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int htrabajadas=0, hextras=0;
	float preciotra=0, precioextra=0,ttra=0,prehora=0,a=0;
	
	printf("\tIngrese las horas trabajadas de la semana:  ");
	scanf("%i",& htrabajadas);
	printf("\n");
	printf("Ingrese el precio por hora:  ");
	scanf("%f",& prehora);
	
	if(htrabajadas>40)
	{
		hextras=htrabajadas-40;
		
		 if( hextras>8)
		{
			
			precioextra=(prehora*(hextras-8))*3;
			preciotra=40*prehora;
			a=8*prehora*2;
				ttra=preciotra+precioextra+a;
				printf("Total que precibe es:  %f",ttra);
		}
			if(hextras<8)
			{
				precioextra=(prehora*hextras)*2;
				preciotra=40*prehora;
				ttra=preciotra+precioextra;
				printf("Total que precibe es:  %f",ttra);
			}
	}
	else
	{
		preciotra=htrabajadas*prehora;
		printf("Total que precibe es:  %f",preciotra);
	}
	
	getch();
}