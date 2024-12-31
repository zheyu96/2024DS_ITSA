#include<stdio.h>
#include<math.h>
int ax,ay,bx,by;
int main(){
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);
    printf("%.2lf\n",sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)));
}