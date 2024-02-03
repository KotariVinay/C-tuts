/* Take name as input and print a greeting message for that particular name */
#include<stdio.h>
int main()
{
    char ch[50];
    printf("Enter your name :\n");
    scanf("%s", ch);
    printf("Hello %s",ch);
    return 0;
}

