#include<stdio.h>
int main(void)
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int i,total=0;
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
                total+=i;
        }
        printf("%d\n",total);
    }
    return 0;
}