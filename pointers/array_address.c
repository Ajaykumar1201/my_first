#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int arr[2][2]={1,2,3,4};	
	
	printf("%d",a++);
	printf("%d",a+=1);
	printf("%d",a=a+1);
}
