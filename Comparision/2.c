/*Write a program to compare two numbers using the conditional operator and display the larger number. Using
the same conditional operator write a program to find the largest of three numbers entered by the user. Depict
the logic using a flowchart.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    int d,e;
    d=a>b?a:b;
    e=d>c?d:c;
    printf("The Greatest number '%d'",e);    
    return 0;
}
