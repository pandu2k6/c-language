#include <stdio.h>
int main(){
    int i,n,range;
    printf("enter a number");
    scanf("%d",& n);
    printf("enter range");
    scanf("%d",&range);
    for(i=1;i<=range;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}