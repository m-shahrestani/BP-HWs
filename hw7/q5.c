#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mabnaye2(int x[],int t,int n)
{
	int j,k=0;
	for(j=n-1;j>=0;j--)
	{
		x[j]=t%2;
		if(x[j]==1)
		k++;
		t/=2;
	}
	return k;
}
void bubble_sort_1(int arr[], int n)
{
  int i, j, t;
  for(i = n - 2 ; i >= 0 ; i--)
    for(j = 0 ; j <= i ; j++)
    	if(arr[j] > arr[j + 1])
		{
	        t = arr[j];
	        arr[j] = arr[j + 1];
	        arr[j + 1] = t;
    	}
}
int main()
{
	int n,i,j,k,m,flag=0,flag2=0;
	scanf("%d",&n);
	int a[n],x[n];
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	bubble_sort_1(a,n);  
	printf("{ }\n");
	for(k=1;k<=n;k++)
	{
		for(i=pow(2,n)-1;i>0;i--)
		{
			m=mabnaye2(x,i,n);
			flag=0;
			flag2=1;
			for(j=0;j<n;j++)
			{
				if(x[j]==1&&m==k){
					if(flag2){
						printf("{ ");
						flag2=0;
					}
					printf("%d ",a[j]);
					flag = 1;
				}
			}	
			if(flag==1)
				printf("}\n");
		}
	}
	return 0;
}
