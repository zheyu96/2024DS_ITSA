#include<stdio.h>
int val,arr[5];
int main(){
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>val) val=arr[i];
    }
    printf("%d\n",val);
}