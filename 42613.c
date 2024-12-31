#include<stdio.h>
int fgcd(int x,int y){
    if(y) return fgcd(y,x%y);
    return x;
}
signed main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        int t=a;
        a=b;
        b=t;
    }
    printf("%d\n",fgcd(a,b));
}