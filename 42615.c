#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if((i%2==0&&i%3==0)&&i%12!=0)
            cnt+=i;
    }
    printf("%d\n",cnt);
}