#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i;
	printf("Enter Element of array : ");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The Elements are : ");
	for(i=0;i<=10;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}