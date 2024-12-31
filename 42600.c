#include<stdio.h>
int n,j;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&j);
        if(j>31) printf("Value of more than 31\n");
        else printf("%d\n",1<<j);
    }
}