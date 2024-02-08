/*
Name : K.Y.Naga Sai Vinay
Date : 08-02-2024
Description : WAP to find simple interest
Sample input : p=100000 time = 5 rate = 5.5
Sample output : si=27500.0000
*/
#include<stdio.h>
int main()
{
    int principal,time;
    float rate,si;
    printf("Enter the principal amount : ");
    scanf("%d",&principal);

    printf("Enter the time :");
    scanf("%d",&time);

    printf("Enter the rate :");
    scanf("%f",&rate);

    si = ( principal * time * rate ) /100 ;
   
    printf("simple interest is %f",si);

    return 0;

}

