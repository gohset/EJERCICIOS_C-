#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][5]={4,3,7,1,2,6,7,9,3,5,2,4,6,8,10};
int j,i;
for(i=0;i<3;i++)
{
for(j=0;j<5;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
printf("\n\n\n");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
printf("\t%i",a[j][i]);
}
printf("\n");
}
getch();
}
