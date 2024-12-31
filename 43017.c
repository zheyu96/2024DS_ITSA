#include<stdio.h>
int n,arr[2000];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
    for(int i=1;i<=n;i++){
        printf("%d",arr[i]);
        if(i!=n) 
            printf(" ");
    }
    printf("\n");
}