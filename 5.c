//Q 5. Write a C program to enter the radius of a circle and find its diameter, circumference.
#include<stdio.h>
int main()
{
    int r,pi=3.14,diameter,area,circumference;
    printf("enter the radious of circle:");
    scanf("%d",&r);
    diameter =2*r;
    circumference =2*pi*r;
    area =pi*r*r;
    printf("Diameter=%d\n",diameter);
    printf("Circumference=%d\n",circumference);
    printf("Area=%d",area);
    return 0;
    }
