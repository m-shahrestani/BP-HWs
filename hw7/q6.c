#include <stdio.h>

int a[1000000];
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
	int n,i,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
 	   scanf("%d",&a[i]);
	bubble_sort_1(a,n);
	for(i=0;i<n;i++)
	{
		if(a[i]>j)
		{
			break;			
		}
		if(a[i]==j)
		{
			j++;
		}
	}
	printf("%d",j);
    return 0;
}
