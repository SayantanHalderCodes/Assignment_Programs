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
    if (a>b && a>c)
    {
        printf("The number '%d' is greater than '%d' and '%d'.",a,b,c);
    }
    else if(a==b==c)
    {
        printf("The three numbers '%d','%d' and '%d' are equal.",a,b,c);
    }
    else if (b>a && b>c)
    {
        printf("The number '%d' is greater than '%d' and '%d'.",b,a,c);
    }
    else
    {
        printf("The number '%d' is greater than '%d' and '%d'.",c,a,b);
    }
    return 0;
}