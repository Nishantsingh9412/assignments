#include <stdio.h>
int main(){
    int n,s,i;
    printf("Enter a number for which you want sum: ");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++){
            s = s+i;
    }
    printf("Sum is %d",s);
    return 0;
}