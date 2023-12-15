#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter Of Size = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Value Of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Element Of Array = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nRotate Element are = ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
		
}