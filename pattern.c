/*
Name : K.Y.Naga Sai Vinay
Date : 07-02-2024
Description : print the pattern
Sample input : 5
Sample output : * * * * *
                * * * * *
		* * * * *
		* * * * *
		* * * * *
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
	for(int j=1;j<=n;j++)
	{
	    printf("* ");
	}
	printf("\n");
    }
    return 0;

}

