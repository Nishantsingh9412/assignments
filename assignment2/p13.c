// Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right
#include <stdio.h>
int main(){
    int n,rem,right;
    printf("Enter 3 Digit number");
    scanf("%d",&n);
    rem = n%10;
    n = n/10;
    right = rem*100+n;
    printf("%d",right);
    return 0;
}