#include<stdio.h>

int main()
{
int a[5][5],b[5][5],i,j;
printf("enter the 5*5 matrix A\n");
for(i=0;i<=5;i++)
for(j=0;j<=5;j++)
scanf("%d",&a[i][j]);
printf("enter the 5*5 matrix B\n");
for(i=0;i<=5;i++)
for(j=0;j<=5;j++)
scanf("%d",&b[i][j]);

printf("the 5*5 matrix A\n");
for(i=0;i<=5;i++)
{
for(j=0;j<5;j++)
{
  printf("%d",a[i][j]);
}
 printf("\n");
}




