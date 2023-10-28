//  En una tienda de descuento las personas que vas a pagar el importe de su compra llegan
//  a la caja y sacan una boiita de color, que les dira que decuento tendra sobre el totalde su
//  compra. Determinar la cantidad que pagara cada cliente desde que la tienda abre hasta
//  que cierra. Se sabe que si el color de la bolita es [] roja[] el cliente obtiene un 40% de 
//  descuento; si es [] amarilla un 25% y si es [] blanca[] no obtiene descuento.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int color=0, ncliente=0,cont=0;
	float desc=0,monto=0,tp=0,acu=0;
	
	printf("Numero total de clientes:   ");
	scanf("%i",& ncliente);
	
	for(cont=1;cont<=ncliente;cont++)
	{
		
		printf("\tCliente N:  %i",cont);
		printf("\n \t 1:) Roja\t 2:) Amarilla\t 3:) Blanca\n\n");
		
		printf("Ingrese el Monto de su compra:  ");
		scanf("%f",& monto);
		printf("\nIngrese el numero que representa el color:  ");
		scanf("%i",& color);
		printf("\n");
		
		if(color==1)
		{
			desc=(monto*40)/100;
			tp=monto-desc;
			acu=acu+tp;
			printf("Su descuento es:  %.2f \t Total a pagar:  %.2f \n",desc,tp);
		}
		if(color==2)
		{
			desc=(monto*25)/100;
			tp=monto-desc;
			acu=acu+tp;
			printf("Su descuento es:  %.2f \t Total a pagar:  %.2f \n",desc,tp);
		}
		if(color==3)
		{
			//acublanca=acublanca+monto;
			
			printf("No tiene descuento \t Total a pagar: %.2f\n",monto);
		}
		
	}
	printf("Precione una tecla para continuar. . .");
	getch();
	clrscr();
	printf("\n\n\t\tEl descuento total del dia fue de:   %.2f",acu);
	getch();
}