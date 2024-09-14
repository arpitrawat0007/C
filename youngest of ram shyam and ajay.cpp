#include<stdio.h>
int main()
{
	int ram,shyam,ajay;
	printf("Enter age of ram");
	scanf("%d",&ram);
	printf("Enter age of shyam");
	scanf("%d",&shyam);
	printf("Enter age of ajay");
	scanf("%d",&ajay);
//	assuming ram is the youngest of three
	if(ram<shyam && ram<ajay)
	{
		printf("ram is the youngest of three");
	}
//	assuming shyam is the youngest of three
	if(shyam<ram && shyam<ajay)
	{
		printf("shyam is the youngest of three");
	}
//	assuming ajay is the youngest of three
	if(ajay<ram && ajay<shyam)
	{
		printf("ajay is the youngest of three");
	}
	return 0;
}