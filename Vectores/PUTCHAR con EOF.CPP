#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch=getchar(),espacios=0;
while(ch!=EOF){
if(ch==' ')
espacios=2;
else{ 
if(espacios==2){
putchar(' ');
espacios=0;
}
putchar(ch);
}
ch=getchar();
}
if(espacios==2)
putchar(' ');
getch();
}