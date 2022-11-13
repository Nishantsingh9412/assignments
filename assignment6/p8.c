// 8. Write a program to check whether a given number is a Prime number or
// not
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool flag;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if(flag == true)
        printf(" %d is a not a Prime no ",n);
    else
        printf("%d is a prime no.",n);

    return 0;
}