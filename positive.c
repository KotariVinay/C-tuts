/*
Name : K.Y.Naga Sai Vinay
Date : 06-02-2024
Description : WAP to find the given number is positive or negative
Sample input : 2
Sample output : positive
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Number You Want To Check :\n");
    scanf("%d",&a);
       
    if(a<0)
    {
	printf("Number Is Negative\n");
    }
    else if(a>0)
    {
	printf("Number Is Possitive\n");
    } 
    else
    {
	printf("You Entered Zero \n");
    }
    return 0;
}

