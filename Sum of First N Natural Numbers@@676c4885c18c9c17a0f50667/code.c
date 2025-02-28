#include<stdio.h>
int main(){
    int i,a,sum=0;
    printf("");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d",sum);
}