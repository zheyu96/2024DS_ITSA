#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}