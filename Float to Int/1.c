/*Write a program to take floating point numbers. Add these numbers and them to an integer variable. Finally display the value of all the three variables and discuss the result.*/
#include<stdio.h>
int main()
{
    float a,b,c;
    int d;
    printf("Enter the three float numbers(Float1,Float2,FLoat3): ");
    scanf("%f %f %f",&a,&b,&c);
    d=a+b+c;
    printf("The three float Digits are: %.1f,%.1f,%.1f\n",a,b,c);
    printf("Their Integer sum is: %d",d);
    return 0;
}