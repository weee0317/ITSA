#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int number,pow = 0;
    int i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&number);
        for(i=2;i<number;i++){
            while(number % i == 0){
                pow++;
                number /= i;
            }
            if(pow == 0)
                continue;
            if(pow == 1)
                printf("%d*",i);
            else if(number != 1 && pow != 1)
                printf("%d^%d*",i,pow);
            else
                printf("%d^%d",i,pow);
            pow = 0;
            if(number == 1)
                break;
        }
        if(number == 1)
            printf("\n");
        else
            printf("%d\n",i);
    }
    return 0;
}