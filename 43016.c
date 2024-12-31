#include<stdio.h>
int x,ans;
int main(){
    for(int i=0;i<6;i++){
        scanf("%d",&x);
        ans+=x*x;
    }
    printf("%d\n",ans);
}