#include<stdio.h>
int main()
{
	int l,b;
	printf("Enter the length of Rectangle : ");
	scanf("%d",&l);
	printf("Enter the breadth of Rectangle  : ");
	scanf("%d",&b);
	int a = l*b;
	int p = 2*(l+b);
	if(a>p){
		printf("The Area Of Rectangle Is Greater Than Its Perimeter");
	}
	if(p>a){
		printf("The Perimeter Of Rectangle Is Greater Than Its Area");
	}
	return 0;
}