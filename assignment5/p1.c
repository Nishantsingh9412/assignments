// 1. Write a program to print MySirG N times on the screen
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of times you want to print : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("MySirG \n");
    return 0;
}