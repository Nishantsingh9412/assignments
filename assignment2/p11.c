//  Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int digit;
    printf("Enter Digit :");
    scanf("%d",&digit);
    
    int append  = (n*10)+digit;
    printf("%d",append);
    return 0;
}