#include<stdio.h>
int strlen(char *str);
void strcpy(char *str2,char *str1)
{
		while(*str1!='\0')
		{
			*str2=str1
			str1++;
		}
}

void strstr(char *str1,char *str2)
{
	
}
int strcmp(char *str1,char * str2)
{
		int str1_len=strlen(str1);
		int str2_len=strlen(str2);
		if(str1_len<str2_len)
			return 1;
		else if(str1_len>str2_len)
			return -1;
		else if(str1_len==str2_len)
			return 0;

}


int strlen(char *str)
{
	int length=0;
	while(*str!='\0')
	{
		length++;
		str++;	
	}
	return length;
}

int main()
{

	char s1[200],s2[200],s3[200];
	printf("Enter the string for s1:\n");
	scanf("%s",s1);	
	printf("Enter the string for s2:\n");
	scanf("%s",s2);	
	int res=strcmp(s1,s2);
	printf("%d",res);
	strcpy()
	return 0;



}
