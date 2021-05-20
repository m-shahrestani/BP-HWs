#include <stdio.h>
#include <stdlib.h>

struct student{
	int id;
	char name[200];
	float mark;
};
int int_cmp(void *i1,void*i2)
{
	
	struct student a=*((struct student*)i1),b=*((struct student*)i2);
	if(a.mark<b.mark)
		return 1;
	if(a.mark>b.mark)
		return -1;
	else
	{
		if(a.id>b.id)
			return 1;
		if(a.id<b.id)
			return -1;
	}

}
//void bubble_sort_1(struct student arr[], int n)
//{
//	struct dish t;
//	int i, j;
//	for(i = n - 2 ; i >= 0 ; i--)
//		for(j = 0 ; j <= i ; j++)
//    	if(arr[j].price > arr[j + 1].price)
//		{
//	        t = arr[j];
//	        arr[j] = arr[j + 1];
//	        arr[j + 1] = t;
//    	}
//}
int main()
{
	int n,i;
	scanf("%d",&n);
	struct student a[n];
	for(i=0;i<n;i++)
	{
//		printf("Enter name %dth\n",i+1);
		getchar();
		gets(a[i].name);
//		printf("Enter id %dth\n",i+1);
		scanf("%d",&a[i].id);
//		printf("Enter mark %dth\n",i+1);
		scanf("%f",&a[i].mark);			
	}
//	for(i=0;i<n;i++)
//	{
//		printf("%s\n",a[i].name);
//		printf("%d\n",a[i].id);
//		printf("%g\n",a[i].mark);
//	}
	qsort(a,n,sizeof(struct student),int_cmp);
//	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i].name);
		printf("%d\n",a[i].id);
		printf("%g\n",a[i].mark);
	}
	return 0;
}
