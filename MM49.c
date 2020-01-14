#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(void)
{
    int nc,n,time;
    scanf("%d",&nc);
    int coin[nc];
    int number,amount,now;
    int i,j,k,min = INT_MAX;
    char op[2];
    for(i=0;i<=nc;i++){
        scanf("%d%c",&coin[i],&op[0]);
        if(op[0] == '\n')
            break;
    }
    scanf("%d",&number);
    time = i;
    for(k=0;k<=i;k++){
        amount = 0;
        now = number;
        for(j=time;j>=0;j--){
            if(now == 0)
                break;
            else if(now < 0){
                amount = INT_MAX;
                break;
            }
            n = 0;
            while(now >= coin[j]){
                now -= coin[j];
                n++;
            }
            amount += n;
        }
        if(amount < min)
            min = amount;
        time--;
    }
    printf("%d\n",min);
    return 0;
}