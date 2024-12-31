#include<stdio.h>
int n,arr[200];
int tra(int x){
    int t=x,ans=0;
    while(t){
        ans+=t%10;
        t/=10;
    }
    return ans;
}
int cmp(int x,int y){
    int t1=tra(x),t2=tra(y);
    if(t1!=t2)
        return t1<t2;
    else    
        return x<y;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(cmp(arr[i],arr[j])==0){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1)
            printf(" ");
    }
    printf("\n");
}