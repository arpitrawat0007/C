// || sign for or operator
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any Number");
	scanf("%d",&n);
	if(n%5==0 || n%3==0){
		printf("The number is divisible by 5 or 3");
	}
	else{
		printf("the number is not divisible by 5 or 3");
	}
	return 0;
}