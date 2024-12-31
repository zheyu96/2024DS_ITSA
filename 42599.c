#include<stdio.h>
int t;
signed main(){
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        long long a=x,b=x*x,c=x*x*x;
        printf("%lld %lld %lld\n",a,b,c);
    }
}