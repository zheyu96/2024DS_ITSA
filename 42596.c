#include<stdio.h>
int a,b;
int main(){
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    int q=a/b,res=a%b;
    if(res<0){
        res+=b;
        q--;
    }
    printf("%d/%d=%d...%d\n",a,b,q,res);
}