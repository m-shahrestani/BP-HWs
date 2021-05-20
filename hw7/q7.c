#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	int n,m,i;
	int *p;
	char str1[200],str2[200];
	gets(str1);
	gets(str2);
	n=strlen(str1);
	m=strlen(str2);
	p=strstr(str1,str2);
	for(i=0;i<n;i++)
	{
		if(&str1[i]==p)
		{
			i+=m-1;
		}
		else
		printf("%c",str1[i]);
	}
	return 0;
}
