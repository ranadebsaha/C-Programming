//Write a programe in c to transpose 2d array.
#include<stdio.h>
main()
{
	int a[2][2],t[2][2],i,j;
	printf("Enter numbers: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The 2D array is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d  ",a[i][j]);
	printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		t[j][i]=a[i][j];
	}
	printf("The 2D array is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d  ",t[i][j]);
	printf("\n");
	}
}
