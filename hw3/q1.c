#include <stdio.h>

int main() {
	int p,q,s;
	printf("Enter s,q,p\n");
	scanf("%d%d%d",&s,&q,&p);
	switch(s)
	{
		case 1:
		{
			switch(q)
			{
				case 1:
					switch(p)
					{
						case 1:
							printf("st1");
						break;
						
						case 0:
							printf("st2");
						break;
					}
				break;
				
				case 0:
					printf("st3,st2");
					switch(p)
					{
						case 0:
							printf(",st1");
						break;
					}
				break;
			}
		break;
		}
		case 0:
		{
			switch(q)
			{
				case 1:
				{
					switch(p)
					{
						case 0:
							printf("st2,st1");
						break;
					}
				break;
				}
				case 0:
				{
					printf("st1");
				break;
				}
			}
		break;
		}
	}
	return 0;
}
