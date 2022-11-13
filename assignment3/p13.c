// 13. Write a program to check 
// whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%2 ==0 && n%3 ==0)
        printf("Number is divided by two and three");
    else
        printf("not divisible by two and three");

    return 0;
}