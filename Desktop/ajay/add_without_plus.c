#include<stdio.h>
int add(int n1,int n2)
{
	int result;
	result=n1^n2;
	return result;
}
int main()
{
	int res=add(3,4);
	printf("%d",res);
}
