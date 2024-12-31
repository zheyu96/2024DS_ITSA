#include<stdio.h>
int x;
signed main(){
    scanf("%d",&x);
    int pay=0;
    if(x>=100)
        pay=x*70;
    else if(x>=30)
        pay=x*80;
    else if(x>=10)
        pay=x*90;
    else pay=x*100;
    printf("%d\n",pay);
}