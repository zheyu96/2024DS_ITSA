#include<stdio.h>
int n,arr[2000],s,e;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
    scanf("%d %d",&s,&e);
    printf("%d\n",arr[e]-arr[s-1]);
}