#include<stdio.h>
main()
{
	int r,c,i,j;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of Column Size = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],ans[r][c];
	
	printf("Enter Value Of First Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Value Of Second Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
    }
    printf("Addition Of Two Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	
}