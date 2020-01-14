#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a;
    int b;
    int d;
    int e;
    int x;
    int y;
    int f;
    int g;
    int h;
    int i;
    int j;
    scanf(" %d/%d",&a,&b);
    scanf(" %d/%d",&d,&e);
    while (1) {
        if (a==0 && b==0 && d==0 && e==0) {
            break;
        }
        x=a*e+d*b;
        y=b*e;
        f=x;
        g=y;
        if(x>=y){
            while(y!=0){
                h=x%y;
                x=y;
                y=h;
            }
            i=f/x,j=g/x;
            printf("%d/%d\n",i,j);
        }
        else if(y>=x){
            while(x!=0){
                h=y%x;
                y=x;
                x=h;
            }
            i=f/y,j=g/y;
            printf("%d/%d\n",i,j);
        }
        scanf(" %d/%d",&a,&b);
        scanf(" %d/%d",&d,&e);
    }

    return 0;
}