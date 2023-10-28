#include <stdio.h>
int strleng(char str[100]){
    int len=0,i;
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    return len;
}

int main(){
    char a[100]="hello-1";
    int len=strleng(a[100]);
    printf("%d",len);
    return 0;
}