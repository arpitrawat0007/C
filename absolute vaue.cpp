#include<stdio.h>
int main()
{

int n;
printf("Enter any Number");
scanf("%d",&n);
if(n<0){
n=n*(-1);
}
printf("The absolute value of is %d",n);
return 0;

}