    // -------------------------------Printing Unit Digit of a given number
    #include <stdio.h>
    int main(){

        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        int utdigit = n%10;
        printf("%d",utdigit);
        return 0;
    }