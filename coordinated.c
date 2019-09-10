#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{

		for(j=i;j>=3;j++)
	{
		
		if(i+j>=3)
			printf("*");
		else
			printf(" ");	
	}
	printf("\n");
	}
	return 0;

}
