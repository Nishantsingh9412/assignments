// print Number without its last digit 
#include <stdio.h>
int main(){

        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        int without_last_digit = n/10;
        printf("%d",without_last_digit);
    return 0;
}