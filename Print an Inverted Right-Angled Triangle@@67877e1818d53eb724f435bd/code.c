#include<stdio.h>
int main(){
    int n,a;
    printf("");
    scanf("%d",&a);
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            printf("* ",j);
        }
        printf("\n");
    }
}
