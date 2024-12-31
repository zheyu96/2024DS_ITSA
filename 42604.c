#include<stdio.h>
signed main(){
    double h,w;
    scanf("%lf %lf",&w,&h);
    h/=100.0;
    double bmi=w/h/h;
    printf("%.2lf\n",bmi);
}