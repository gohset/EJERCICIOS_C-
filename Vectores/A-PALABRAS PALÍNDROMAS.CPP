//Verificar si una cadena ingresada por teclado es palindroma.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int b=0,c=0;
char a[20],d[20],e[20];
printf("\t\t \t\tPROGRAMA <<<< SET 1.1.0 >>>>\n");
printf("Ingrese una palabra\n");
gets(a);
strcpy(e,a);
b=strlen(a);
if(b==3)
{
strrev(a);
strcpy(d,a);
if(e[0]==d[0] && e[2]==d[2])
{
printf("Es palindroma\n");
}
else
{
printf("No es palindroma\n");
}
}
if(b==4)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[3]==d[3])
{
if(e[1]==d[1] && e[2]==d[2])
{
printf("Es palindroma\n");
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==5)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[4]==d[4])
{
if(e[1]==d[1] && e[3]==d[3])
{
printf("Es palindroma\n");
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==6)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[5]==d[5])
{
if(e[1]==d[1] && e[4]==d[4])
{
if(e[2]==d[2] && e[3]==d[3])
{
printf("Es palindroma\n");
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==7)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[6]==d[6])
{
if(e[1]==d[1] && e[5]==d[5])
{
if(e[2]==d[2] && e[4]==d[4])
{
printf("Es palindroma\n");
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==8)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[7]==d[7])
{
if(e[1]==d[1] && e[6]==d[6])
{
if(e[2]==d[2] && e[5]==d[5])
{
if(e[3]==d[3] && e[4]==d[4])
{
printf("Es palindroma\n");
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==9)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[8]==d[8])
{
if(e[1]==d[1] && e[7]==d[7])
{
if(e[2]==d[2] && e[6]==d[6])
{
if(e[3]==d[3] && e[5]==d[5])
{
printf("Es palindroma\n");
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==10)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[9]==d[9])
{
if(e[1]==d[1] && e[8]==d[8])
{
if(e[2]==d[2] && e[7]==d[7])
{
if(e[3]==d[3] && e[6]==d[6])
{
if(e[4]==d[4] && e[5]==d[5])
{
printf("Es palindroma\n");
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==11)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[10]==d[10])
{
if(e[1]==d[1] && e[9]==d[9])
{
if(e[2]==d[2] && e[8]==d[8])
{
if(e[3]==d[3] && e[7]==d[7])
{
if(e[4]==d[4] && e[6]==d[6])
{
printf("Es palindroma\n");
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==12)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[11]==d[11])
{
if(e[1]==d[1] && e[10]==d[10])
{
if(e[2]==d[2] && e[9]==d[9])
{
if(e[3]==d[3] && e[8]==d[8])
{
if(e[4]==d[4] && e[7]==d[7])
{
if(e[5]==d[5] && e[6]==d[6])
{
printf("Es palindroma\n");
}
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==13)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[12]==d[12])
{
if(e[1]==d[1] && e[11]==d[11])
{
if(e[2]==d[2] && e[10]==d[10])
{
if(e[3]==d[3] && e[9]==d[9])
{
if(e[4]==d[4] && e[8]==d[8])
{
if(e[5]==d[5] && e[7]==d[7])
{
printf("Es palindroma\n");
}
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==14)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[13]==d[13])
{
if(e[1]==d[1] && e[12]==d[12])
{
if(e[2]==d[2] && e[11]==d[11])
{
if(e[3]==d[3] && e[10]==d[10])
{
if(e[4]==d[4] && e[9]==d[9])
{
if(e[5]==d[5] && e[8]==d[8])
{
if(e[6]==d[6] && e[7]==d[7])
{
printf("Es palindroma\n");
}
}
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
if(b==15)
{
strrev(a);
puts(a);
strcpy(d,a);
if(e[0]==d[0] && e[14]==d[14])
{
if(e[1]==d[1] && e[13]==d[13])
{
if(e[2]==d[2] && e[12]==d[12])
{
if(e[3]==d[3] && e[11]==d[11])
{
if(e[4]==d[4] && e[10]==d[10])
{
if(e[5]==d[5] && e[9]==d[9])
{
if(e[6]==d[6] && e[8]==d[8])
{
printf("Es palindroma\n");
}
}
}
}
}
}
}
else
{
printf("No es palindroma\n");
}
}
getch();
}