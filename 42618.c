#include<stdio.h>
int pre[2000],n,a,b;
int main(){
    for(int i=1;i<=1000;i++)
        pre[i]=i+pre[i-1];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            int t=a;
            a=b;
            b=t;
        }
        printf("%d\n",pre[b]-pre[a-1]);
    }
}