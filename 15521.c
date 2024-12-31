#include<stdio.h>
#define int long long 
int n,arr[1009];
signed main(){
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
        scanf(" %lld",&arr[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    for(int i=0;i<n;i++)
        printf("%lld %lld\n",i+1,arr[i]);
}