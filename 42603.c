#include<stdio.h>
int x;
int main(){
    scanf("%d",&x);
    printf("NT10=%d\n",x/10);
    x%=10;
    printf("NT5=%d\n",x/5);
    x%=5;
    printf("NT1=%d\n",x);
}