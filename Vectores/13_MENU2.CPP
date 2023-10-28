//  Realiar un programa que pida dos numeros enteros por teclado y muestre
//  por pantalla  el siguiente menu:

// 				MENU
// 					1.	Sumar
// 					2	Restar
// 					3.	Multiplicar
// 					4.	Dividir
// 					5.	Salir
// 					Ingrese su opcion:

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int n1=0,n2=0,s=0,r=0,m=0,op=0;
	float d=0,n3=0,n4=0;
	char c[1];
	printf("Ingrese el primer numero: ");
	scanf("\n%i",&n1);
	printf("Ingrese el segundo numero: ");
	scanf("\n\n%i",&n2);
	
	n3=n1;
	n4=n2;
	while(op<5)
	{
		printf("\t\tMENU\n\n");
		printf("\t1.	Sumar\n");
		printf("\t2.	Restar\n");
		printf("\t3.	Multiplicar\n");
		printf("\t4.	Dividir\n");
		printf("\t5.	Salir\n\n");
		
		printf("\t\t\t\tNumero1= %i\tNumero2= %i\n\n",n1,n2);
		
		printf("Ingrese su Opcion: ");
		scanf("\n\n%i",& op);
		
		switch(op)
		{
			case 1:
			s=n1+n2;
			printf("\n\tLa Suma es: %i",s);
			break;
			
			case 2:
			r=n1- n2;
			printf("\n\tLa Resta es: %i",r);
			break;
			
			case 3:
			m=n1*n2;
			printf("\n\tLa Multiplicacion es: %i",m);
			break;
			
			case 4:
			d=n3/n4;
			printf("\n\tLa Division es: %.2f",d);
			break;
			
			case 5:
			printf("¿Desea salir realmente (S/N)?  ");
			scanf("%s",& c);
			char s2[]={"s"};
			if(strcmp(s2,c)==0)
			{
				op++;
				printf("\t\t\tSalir\n\n");
				printf("\t\tPrecione una tecla para continuar . . . ");
				
			}
			char s3[]={"n"};
			if(strcmp(s3,c)==0)
			{
				op=0;
				printf("\t\tPrecione una tecla para continuar . . . ");
			}
			
			
			break;
			
		}
		
		getch();
		clrscr();
	}
	
	getch();
}
