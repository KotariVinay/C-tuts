/* WAP to do arithmetic operations by simple calculator using switch case */
#include<stdio.h>
int main()
{
    char ch;
    int num1,num2;
    printf("Enter the operator : ");
    scanf("%c",&ch);
    printf("Enter the two numbers :");
    scanf("%d %d",&num1,&num2);
    switch(ch)
    {

	case '+' : printf("%d + %d = %d",num1,num2,num1+num2);
		   break;
	case '-' : printf("%d - %d = %d",num1,num2,num1-num2);
		   break;
	case '*' : printf("%d * %d = %d",num1,num2,num1*num2);
		   break;
	case '/' : printf("%d / %d = %d",num1,num2,num1/num2);
		   break;
        default : printf("operator is not correct");
    }
    return 0;
}
