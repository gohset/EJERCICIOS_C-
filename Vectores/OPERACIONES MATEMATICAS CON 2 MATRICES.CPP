//Realizar la operaciones matem ticas con 2 matrices A y B
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int a[3][3]={2,3,5,5,-8,3,6,-5,2};
int b[3][3]={5,-9,3,6,8,6,2,5,-3};
float c[3][3]={2,3,5,5,-8,3,6,-5,2};
float d[3][3]={5,-9,3,6,8,6,2,5,-3};
int j,i,p,q,su=0,res=0,mul=0,mul2=0;
float div=0;
printf("\t\t \tPROGRAM <<<< SET 1.0.4 >>>>\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%i",a[i][j]);
}
printf("\n");
}
printf("\n\n");
for(p=0;p<3;p++)
{
for(q=0;q<3;q++)
{
printf("\t%i",b[p][q]);
}
printf("\n");
}
i=0;
j=0;
q=0;
p=0;
printf("\t<<<< SUMA >>>>>\n");
for(int k=0;k<3;k++)
{
for(int s=0;s<3;s++)
{
for(int t=0;t<3;t++)
{
su=a[i][j]+b[p][q];
}
printf("\t%i",su);
j++;
q++;
}
printf("\n");
j=0;
q=0;
i++;
p++;
}
i=0;
j=0;
q=0;
p=0;
printf("\t<<<< RESTA >>>>>\n");
for(k=0;k<3;k++)
{
for(int s=0;s<3;s++)
{
for(int t=0;t<3;t++)
{
res=a[i][j]-b[p][q];
}
printf("\t%i",res);
j++;
q++;
}
printf("\n");
j=0;
q=0;
i++;
p++;
}
i=0;
j=0;
q=0;
p=0;
printf("\t<<<< MULTIPLICACION >>>>>\n");
for(k=0;k<3;k++)
{
for(int s=0;s<3;s++)
{
for(int t=0;t<3;t++)
{
mul=a[i][j]*b[p][q];
}
printf("\t%i",mul);
j++;
q++;
}
printf("\n");
j=0;
q=0;
i++;
p++;
}
i=0;
j=0;
q=0;
p=0;
printf("\t<<<< MULTIPLICACION 2 >>>>>\n");
for(k=0;k<3;k++)
{
for(int s=0;s<3;s++)
{
for(int t=0;t<3;t++)
{
mul2=a[i][j]*b[q][p];
}
printf("\t%i",mul2);
j++;
q++;
}
printf("\n");
j=0;
q=0;
i++;
p++;
}
i=0;
j=0;
q=0;
p=0;
printf("\t<<<< DIVICION >>>>>\n");
for(k=0;k<3;k++)
{
for(int s=0;s<3;s++)
{
for(int t=0;t<3;t++)
{
div=c[i][j]/d[p][q];
}
printf("\t%f",div);
j++;
q++;
}
printf("\n");
j=0;
q=0;
i++;
p++;
}
printf("<<<<< TRASPUESTA DE B >>>>>>\n");
for(p=0;p<3;p++)
{
for(q=0;q<3;q++)
{
printf("\t%i",b[q][p]);
}
printf("\n");
}
getch();
}