#include<stdio.h>
signed main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int sum=a*a+b*b+2*a*b;
        printf("%d\n",sum);
    }
}