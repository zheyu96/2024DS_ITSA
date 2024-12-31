#include<stdio.h>
#include<string.h>
int n,x;
char str[1009];
int main(){
    scanf("%d\n",&n);
    scanf(" %s",&str);
    scanf(" %d",&x);
    for(int i=0;i<n;i+=x){
        for(int j=0;j<x&&i+j<n;j++)    
            printf("%c",str[i+j]);
        if(i+x<n)
            printf(" ");
    }
    printf("\n");
}