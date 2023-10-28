#include<stdio.h>
int main(){
    int a[2][2];
    int i,j,sr,sc;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        sc=sr=0;
        for (j=0;j<2;j++){
            sc+=a[j][i];
            sr+=a[i][j];
        }
        printf("\n");
        printf("sc=%d",sc);
        printf("sr=%d",sr);
    }
}