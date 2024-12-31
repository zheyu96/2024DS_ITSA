#include<stdio.h>
int t,b,h;
signed main(){
    scanf("%d %d %d",&t,&b,&h);
    double area=(t+b)*1.0/2.0*h;
    printf("Trapezoid area:%.1lf\n",area);
}