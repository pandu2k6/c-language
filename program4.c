#include<stdio.h>
int main(){
    int arr1[5],arr2[5],summ[5];
    int i;
    for (i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    for (i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<5;i++){
        summ[i]=arr1[i]+arr2[i];
        printf("index  %dis:%d\n",i,summ[i]);
    }    
}