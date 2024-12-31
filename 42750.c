#include<stdio.h>
#define int long long 
int tab[100],n,x;
signed main(){
    tab[0]=1;
    for(int i=1;i<=20;i++)
        tab[i]=tab[i-1]*i;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        printf("%lld\n",tab[x]);
    }
}