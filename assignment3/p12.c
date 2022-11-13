// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    if(ch<='z' && ch>='a')
        printf("Lowercase character ");
    else if(ch<='Z' && ch>='A')
        printf("Uppercase character ");
    else
        printf("Not uppercase or lowercase");

    return 0;
}