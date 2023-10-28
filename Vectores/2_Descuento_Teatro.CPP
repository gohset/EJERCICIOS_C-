//El teatro Jose de la Cruz Mena otorga descuentos segun la edad del cliente.
/*Determinar la cantidad de dinero qu el teatro deja de percibir por cada una de  las categorias.
Tomar en cuenta que los niños menores de 5 años no pueden dentrar al teatro y que existe un
precio unico en los acientos. Los descuentos se hacen tomando en cuenta el siguiente cuadro.*/

//                                                                    Edad							Descuento
//            Categoria 1                                  5 - 14								35%
//		   Categoria 2 						    15 - 19	                				25%
//            Categoria 3 						     20 - 45				          		10%
//		    Categoria 4						     46 - 65		          			     25%
//			Categoria 5							 66 en adelante  	          	35%

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int edad=0,npersonas=0,cont=1;
	float dec=0, precio=0, tp=0, acu=0;
	
	printf("\t\tAplication [] SET [] \tSETOGA 1.1\n\n");
	printf("\t \t   Edad\t\t      Descuento\n");
	printf("Categoria 1 \t  5 - 14\t\t35%\n");
	printf("Categoria 2 \t 15 - 19\t\t25%\n");
	printf("Categoria 3 \t  20 - 45\t\t10%\n");
	printf("Categoria 4 \t  46 - 65\t\t25%\n");
	printf("Categoria 5 \t  66 en adelante\t35%\n\n");
	
	
	printf("Ingrese el N de personas que ingresan al Teatro:    ");
	scanf("%i",& npersonas);
	printf("\n");
	
	for(cont;cont<=npersonas;cont++)
	{
	printf("N persona :  %i       ",cont);
		printf("\n");
		
	printf("Ingrese su Edad:  ");
	scanf("%i",& edad);
	 
	printf("\n Ingrese el precio fijo del aciento:   ");
	scanf("%f",& precio);
	
		if (edad<5)
		{
			printf("No tiene la edad sufisiente...\n");
			cont--;
			getch();
			clrscr();
			
			printf("\t\tAplication [] SET [] \tSETOGA 1.1\n\n");
	printf("\t \t   Edad\t\t      Descuento\n");
	printf("Categoria 1 \t  5 - 14\t\t35%\n");
	printf("Categoria 2 \t 15 - 19\t\t25%\n");
	printf("Categoria 3 \t  20 - 45\t\t10%\n");
	printf("Categoria 4 \t  46 - 65\t\t25%\n");
	printf("Categoria 5 \t  66 en adelante\t35%\n\n");
		}
			if( edad>4 && edad<=14)
			{
			dec=(precio*35)/100;
			tp=tp+dec;
			printf("\n   Categoria 1\tSu descuento es:  %f\n",dec);
			}
			dec=0;
			
	if (edad>=15 && edad <=19)
	{
		dec=(precio*25)/100;
		tp=tp+dec;
		printf("\n    Categoria 2 \t   Su descuento es:  %f\n",dec);
	}
	dec=0;
	if (edad>=20 && edad<=45)
	{
		dec=(precio*10)/100;
		tp=tp+dec;
		printf("\n   Categoria 3 \t    Su descuento es:  %f\n",dec);
	}
	dec=0;
	if(edad>=46 && edad<=65)
	{
		dec=(precio*25)/100;
		tp=tp+dec;
		printf("\n    Categoria 4 \t   Su descuento es:  %f\n",dec);
	}
	dec=0;
	if(edad>=66)
	{
		dec=(precio*35)/100;
		tp=tp+dec;
		printf("\n    Categoria 5 \t   Su descuento es:  %f\n",dec);
	}

	
	}
	clrscr();
		printf("\n \n \t\tTotal que deja de percibir:  $ %.2f",tp);
	
	
	getch();
	
}
