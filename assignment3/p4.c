// 4. Write a program to check whether a given number is an even number or an odd 
// number without using % operator.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if((n&1) == 0)
        printf("%d is even",n);
    else
        printf("%d is Odd",n);
    return 0;
}