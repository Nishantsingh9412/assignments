#include <stdio.h>
int main(){
    // char str[12];
    // printf("Enter date in DD\\MM\\YYYY  :");
    // gets(str);
    // printf("%s",str);

    int d,m,y;
    printf("Enter Date in DD \\ MM \\ YYYY : ");
    scanf("%d /%d/ %d",&d,&m,&y);
    printf(" \" Day - %d Month - %d Year - %d \" ",d,m,y);
    return 0;
}