// 10. Write a program to reverse a given number
#include <stdio.h>
int main(){
    int n,rem,rev=0;
    printf("enter number : ");
    scanf("%d",&n);
    while(n){
        rem = n%10;
        rev = (rev*10)+rem;
        n = n/10;
    }
    printf("%d",rev);
    return 0;

}