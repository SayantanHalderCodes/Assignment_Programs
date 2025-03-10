#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Numbers: ");
	scanf("%d %d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("The Numbers after swapping are: %d,%d",a,b);
	return 0;
}
