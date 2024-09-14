#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3],i,j;
	printf("Enter elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}