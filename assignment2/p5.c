// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("enter 3 digit number");
    scanf("%d",&n);
    while (n>0){
        int rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}