#include<stdio.h>
void pointer_swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	n2=&temp;
	printf("%d",*n1);
	printf("%d",*n2);
	
	

}

int main()
{
	
	int a=5,b=2;		
	pointer_swap(&a,&b);
/*
	int *p,*q;
	int temp;
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;	
	*q=temp;
	printf("%d",*p);
	printf("%d",*q);
	return 0;
*/
	
}

