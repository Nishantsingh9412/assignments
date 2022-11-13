//  Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
#include <stdio.h>
int main(){
    int last = 0;
    int n,x;
    printf("enter number : ");
    scanf("%d",&n);
    n = n/10;
    x = n*10;
    printf("%d",x);
    return 0;
}