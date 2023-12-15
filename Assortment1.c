#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter of Size = ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter Value Of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nElement Of Array  = ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n\nNegative Element of Array = ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{	
			printf("%d ",a[i]);
		}
	}
}