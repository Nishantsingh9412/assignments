// 3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main(){
    int n,sum=0,odd;
    printf("Enter Value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        odd = 2*i-1;
        sum+=odd;
    }
    printf("%d",sum);
    return 0;
}