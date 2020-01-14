#include<stdio.h>
#define max 1000
int main(void)
{
    int file_num;
    int times=0;
    int result[max];
    scanf("%d",&file_num);
    while(times<file_num)
    {
        int i;
        int ticket[max];
        int cnt[max]={0};
        int data_num;
        scanf("%d",&data_num);
        for(i=0;i<data_num;i++)
            scanf("%d",&ticket[i]);
        for(i=0;i<data_num;i++)
            cnt[ticket[i]-1]++;
        int winner=-1,tickets=0;
        for(i=0;i<data_num;i++)
        {
            if(cnt[i]>tickets)
            {
                winner=i;
                tickets=cnt[i];
            }
        }
        if(tickets-1>=data_num/2)
            result[times]=winner+1;
        else
            result[times]=0;
        times++;
    }
    int j;
    for(j=0;j<file_num;j++)
        printf("%d\n",result[j]);
    return 0;
}