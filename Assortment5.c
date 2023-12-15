#include<stdio.h>
main()
{
	int r,c,i,j;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter Value Of Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);	
		}
		printf("\n");
	}
	printf("Element Of The Transpose  Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}