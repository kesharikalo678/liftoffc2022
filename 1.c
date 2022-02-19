//Q 1. Write a C program to display your basic information like name, regd no. (only last 3digits), branch and your hobbies.
#include<stdio.h>
int main(){
    char name[20],branch[25],hobbies[20];
    int regd;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your regd:");
    scanf("%d",&regd);
    printf("enter your branch:");
    scanf("%s",&branch);
    printf("enter your hobbies:");
    scanf("%s",&hobbies);
    printf("name: %s\n",name);
    printf("regd: %d\n",regd);
    printf("branch: %s\n",branch);
    printf("hobbies: %s",hobbies);
    return 0;

}
