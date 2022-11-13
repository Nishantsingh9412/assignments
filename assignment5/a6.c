// 6. Write a program to print the first N even natural numbers
#include <stdio.h>
int main(){
    int n;
    printf("Enter upto which you wanna print natural numbers : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",2*i);
    }    
    return 0;
}









// #include <stdio.h>
// int main(){
//     int a,b,c;
//     for(a=5;a>1;a--){
//         for(b=6-a;b<=5;b++){
//             c = a+b;
//             printf("\n %d %d %d",a,b,c);
//         }
//     }
//     return 0;
// }