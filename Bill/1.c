//Write a program to calculate the bill amount for an item given its quantity sold, value, discount, and tax.
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter the following details as shown (Quantity Sold,Value,Discount): ");
    scanf("%d %d %d",&a,&b,&c);
    g=a*b;
    d=(g*c)/100;
    f=g-d;
    e=(18/100)*f;
    f=f+e;
    printf("====================");
    printf("Your Bill");
    printf("====================\n");
    printf("Quantity Sold: %d\n",a);
    printf("Value of the Product: %d Rupees\n",b);
    printf("Discount applied: %d%%\n",c);
    printf("Tax Applied: 18%%\n");
    printf("---------------------------------\n");
    printf("Final Price: %d\n",f);
    printf("---------------------------------");
    return 0;
}