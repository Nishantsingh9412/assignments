// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    if(ch<='z' && ch>='a')
        printf("Lowercase character ");
    else if(ch<='Z' && ch>='A')
        printf("Uppercase character ");
    else if(ch<='9' && ch>='0')
        printf("Digits");
    else
        printf("Special Characters");

    return 0;
}