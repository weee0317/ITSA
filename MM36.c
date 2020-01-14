#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,k,np;
    int number;
    for(i=0;i<30000;i++){
        np = 1;
        scanf("%d",&number);
        if(number == 0)
            break;
        for(j=3;j<number;j++){
            for(k=2;k<=j;k++){
                if(j % k == 0)
                    break;
            }
            if(j == k)
                np++;
        }
        printf("%d\n",np);
    }
    return 0;
}