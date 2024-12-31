#include<stdio.h>
int x;
int main(){
    scanf("%d",&x);
    if(x>0) printf("正數\n");
    if(x==0) printf("0\n");
    if(x<0) printf("負數\n");
}