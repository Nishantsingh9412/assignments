// 4. Write a program to print the first N odd natural numbers
#include <stdio.h>
int main(){
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    for(int i=1,j=0;i<=n,j<=n-1;i++,j++){
            printf("%d ",i+j);
    }    
    return 0;
}