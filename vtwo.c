#include<stdio.h>
int main
{
	int a,b,temp;
	printf("\t Enter the two numbers to swap:  ");
	scanf("%d  %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("swapped numbers: %d %d.");
return 0;
}
