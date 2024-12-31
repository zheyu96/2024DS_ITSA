#include<stdio.h>
int a,b;
int fgcd(int x,int y){
    if(y==0) return x;
    return fgcd(y,x%y);
}
signed main(){
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("%d\n",fgcd(b,a));
    else printf("%d\n",fgcd(a,b));
}