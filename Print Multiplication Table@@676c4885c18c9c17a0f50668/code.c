#include<stdio.h>
int main(){
    int i,j,n;
    printf("");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            printf("%d",i*j);
            printf("\n");
        }
        printf("\n");
    }
}