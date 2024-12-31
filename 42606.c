#include<stdio.h>
double min,val;
int main(){
    scanf("%lf",&min);
    if(min>=1500)
        printf("%.1lf\n",0.9*0.79*min);
    else if(min>800)
        printf("%.1lf\n",0.9*0.9*min);
    else 
        printf("%.1lf\n",0.9*min);
}