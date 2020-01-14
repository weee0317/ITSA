#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j;
    int max,n,ans;
    scanf("%d",&max);
    for(i=0;i<max;i++){
        scanf("%d",&n);
        ans = 1;
        for(j=1;j<=n;j++)
            ans *= j;
        printf("%d\n",ans);
    }
    return 0;
}