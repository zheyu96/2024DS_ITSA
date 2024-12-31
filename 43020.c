#include<stdio.h>
int n,arr[2000];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    int ans=0,pre=0,suf=0,pos=0;
    for(int i=0;i<n;i++){
        pre+=arr[1+pos];
        suf+=arr[n-pos];
        pos++;
        //printf("cur %d %d\n",pre,suf);
        if(pre==suf) ans++;
    }
    printf("%d\n",ans);
}