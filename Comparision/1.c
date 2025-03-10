/*Write a program to compare two numbers using the conditional operator and display the larger number. Using
the same conditional operator write a program to find the largest of three numbers entered by the user. Depict
the logic using a flowchart.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("The number '%d' is greater than '%d'.",a,b);
    }else if(a==b){
        printf("The number '%d' is equal to '%d'.",a,b);
    }else{
        printf("The number '%d' is greater than '%d'.",b,a);
    }
    return 0;
}