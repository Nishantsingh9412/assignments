// 15. Write a program to check whether a 
// given number is positive, negative or zero.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if (n>0)
        printf("Positive");
    else if(n==0)
        printf("Zero");
    else
        printf("Negative");
    return 0;
}