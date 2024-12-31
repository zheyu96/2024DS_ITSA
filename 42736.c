#include<stdio.h>
int n;
signed main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("%d",i);
        if(n-i>1)
            printf(" ");
    }
    printf("\n");
}