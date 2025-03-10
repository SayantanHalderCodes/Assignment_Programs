/*Write a program to prepare a grocery bill. The program will ask for the name of the items purchased, quantity
in which it is purchased, and its price per unit. Then display the bill in the following format.*/
#include<stdio.h>
int main()
{
    int q1,q2,p1,p2,a1,a2,f;
    char n1[20];
    char n2[20];
    printf("Enter the Following Details of First product as(Name,Quantity,Price): ");
    scanf("%s %d %d",&n1,&q1,&p1);
    printf("Enter the Following Details of Second product as(Name,Quantity,Price): ");
    scanf("%s %d %d",&n2,&q2,&p2);
    a1=q1*p1;
    a2=q2*p2;
    f=a1+a2;
    printf("**************************BILL****************************\n");
    printf("Item            Quantity           Price            Amount\n");
    printf("**********************************************************\n");
    printf("%s              %d               Rs %d            Rs %d\n",n1,q1,p1,a1);
    printf("%s              %d               Rs %d            Rs %d\n",n2,q2,p2,a2);
    printf("----------------------------------------------------------\n");
    printf("Total Amount to be paid:                          Rs %d\n",f);
    printf("----------------------------------------------------------\n");
    return 0;
}