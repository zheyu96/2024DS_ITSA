#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prime=1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            prime=0;
    if(prime) printf("YES\n");
    else printf("NO\n");
}