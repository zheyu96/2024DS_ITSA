#include<stdio.h>
int x,y;
int main(){
    while(scanf(" %d",&x)!=EOF){
        scanf(" %d",&y);
        if(x*x+y*y<=10000)
            printf("inside\n");
        else printf("outside\n");
    }
}