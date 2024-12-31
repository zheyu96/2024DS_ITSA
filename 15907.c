#include<stdio.h>
int x,y;
int main(){
    while(scanf(" %d",&x)!=EOF){
        int ans=0;
        for(int i=1;i<=x;i++)
            if(i%3==0)
                ans+=i;
        printf("%d\n",ans);
    }
    
}