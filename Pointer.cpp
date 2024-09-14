#include<stdio.h>
#include<conio.h>
int main()
{
int a = 100;
int *ptr; // ptr = pointer , * = address at variable operator
ptr = &a;
printf("The address of pointer or a variable is : %d\n",ptr);
printf("The Value stored at pointer variable is : %d ",*ptr);
getch();
return 0;	
}