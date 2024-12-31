#include<stdio.h>
int n,val,arr[5];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>val) val=arr[i];
    }
    printf("%d\n",val);
}