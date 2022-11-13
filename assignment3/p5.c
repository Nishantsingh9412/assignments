// 5. Write a program to check whether a given number 
// is a three-digit number or not.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n/1000 == 0)
        printf("Three Digit number ");
    else
        printf("Greater than 3 digit");
    return 0;
}