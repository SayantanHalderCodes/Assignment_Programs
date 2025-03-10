//Q3.Write a program to calculate the total amount of money in the piggybank, given the coins of Rs. 10, Rs. 5, Rs. 2, and Rs. 1.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the No. of Rs 10 coins: ");
    scanf("%d",&a);
    printf("Enter the No. of Rs 5 coins: ");
    scanf("%d",&b);
    printf("Enter the No. of Rs 2 coins: ");
    scanf("%d",&c);
    printf("Enter the No. of Rs 1 coins: ");
    scanf("%d",&d);
    e=(a*10)+(b*5)+(c*2)+(d*1);
    printf("------------------------------------------------\n");
    printf("The total amount of money in Piggybank: Rs %d\n",e);
    printf("------------------------------------------------");
    return 0;
}