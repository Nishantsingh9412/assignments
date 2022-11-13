//  Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    printf("%c",ch);
    int x = ch;
    printf("%d",x);
    return 0;
}