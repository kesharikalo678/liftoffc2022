//Q 2. Write a program to find maximum between two numbers. (In this quest
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers:");
    scanf("%d%d", &x,&y);
    if(x>y)
    {
    printf("%d is greater",x);
    }
    else
    {
   printf ("%d is greater",y);
    }

    return 0;
    }