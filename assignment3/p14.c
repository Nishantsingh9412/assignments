// 14. Write a program to check whether a given 
// number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%3 == 0 || n%7 ==0)
        printf("Number is divided by either seven and three");
    else
        printf("not divisible by seven and three");

    return 0;
}