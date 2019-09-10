#include<stdio.h>
#include<string.h>
int main()
{
	char *str1[20],*str2[20],*str3[20];
	char *p;	
	//*str3;
	char *str4="tam";	
	//char *p;
	printf("enter the string: ");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("%s\n",str2);
	p=strstr(str1,str4);
	printf("%s\n",p);
	strncpy(str3,str1,3);
	printf("%s\n",str3);

	return 0;
	
}
