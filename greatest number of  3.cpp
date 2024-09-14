#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter First Number : ");
scanf("%d",&a);
printf("Enter Second Number : ");
scanf("%d",&b);
printf("Enter Third Number : ");
scanf("%d",&c);
// assuiming a be the largest number
if(a>b && a>c){
	printf("%d is the largest number",a);
}
// assuiming b be the largest number
if(b>a && b>c){
	printf("%d is the largest number",b);
}
// assuiming c is the largest number
if(c>a && c>b){
	printf("%d is the largest number",c);
}

return 0;
}