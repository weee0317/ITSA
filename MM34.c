#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(void)
{
    int min;
    int max;
    int nt,nm,number[1000];
    int i,j,k,m,n;
    scanf("%d",&nt);
    for(i=0;i<nt;i++){
        scanf("%d",&nm);
        min = INT_MAX;
        max = 0;
        for(j=0;j<nm;j++){
            scanf("%d",&number[j]);
            if(number[j] < min)
                min = number[j];
            if(number[j] > max)
                max = number[j];
        }
        m = min;
        n = max;
        while(n != 0){
            k = m % n;
            m = n;
            n = k;
        }
        printf("%d\n",m);
    }
    return 0;
}