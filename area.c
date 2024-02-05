/* WAP to find area and circumference of acircle */
#include<stdio.h>
int main()
{
    int rad;
    float pi=3.14,area,cir;
    printf("enter the radius :\n");
    scanf("%d",&rad);
    area=pi * rad * rad ;
    cir=2 * pi * rad ;
    printf("area=%f\ncircumference=%f",area,cir);
    return 0;
}

