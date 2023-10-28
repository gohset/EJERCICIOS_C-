//  Realice un programa que calcule y visualice el mas grande, el mas pequeno y la media
//  de n numeros (n>0). El volor de n se solicitara al printfcipio del programa y los numeros 
//  seran introducidos por el usuario.

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=0,n2=1,n3=0,n4=0,n5=0,a[500],b[500],cont=0;
	float su=0,media=0;
	
	printf("Cuantos numeros desea ingresar: ");
	scanf("%i",& n);
	for(n2;n2<=n;n2++)
	{
		printf("Ingrese un numero: ");
		scanf("%i",& n3);
		
		cont++;
	a[n2]=n3;
	b[n2]=n3;
	su=su+n3;
	}

	printf("\n\n\tTotal elementos: [ %i ]\n",cont);
	media=su/cont;
	printf("\tLa sumatoria total es: %.0f\n",su);
	printf("\tLa media de los numeros dados es: [ %.2f ]\n",media);
	
	for(int setga=0;setga<10;setga++)
	{
	for(int set=0;set<10;set++)
	{
		if(a[set]<a[set+1])
	{
		n4=a[set+1];
		a[set+1]=a[set];
		a[set]=n4;
	}
	
	}
	//   printf("\tEl valor minino introducido es: [ %i ]\n",b[0]);
	
	}
	printf("\tEl valor maximo introducido es: [ %i ]\n",a[0]);
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	for(int k=1;k<n2;k++)
		{
			printf("%i\n",b[k]);
		}
	
	int n6=0;
	for(int setga1=0;setga1<=n2;setga1++)
	{
	for(int set1=0;set1<n2;set1++)
	{
		
	// ** MENOR **********************************
	if(b[set1]>b[set1+1])
	{
		//n6=b[set1+1];
		n5=b[set1];   // ******* ESTA ES LA QUE CONTIENE EL NUMERO MENOR......
		 b[set1]=b[set1+1]; //  Con esta linea de codigo lo que hacemos es ordenar
		 b[set1+1]=n5;        //  Con esta linea de codigo lo que hacemos es ordenar
		
	}
	
	}
	}
	/////////////////////////////////////////////////////////////////////////////
	printf("\tEl valor minino introducido es: [ %i ]\n",n5);
	//   printf("\tEl valor maximo introducido es: [ %i ]",a[0]);
	
	
	getch();
}