#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#define Max 100

int main(void)
{
    char line[Max];
    char ans[Max];
    int i=0,cnt=0;

    for(i=0;i<Max;i++)
    {
        ans[i]='\0';
    }
    while((fgets(line,Max,stdin))!=NULL)
    {
        cnt=0;
        line[strlen(line)-1]='\0';
        for(i=0;line[i]!='\0';i++)
        {
            ans[cnt] = line[i]-3;
            cnt++;
        }
        printf("%s\n",ans);
        for(i=0;i<cnt;i++)
        {
            ans[i]='\0';
        }

    }
    return 0;
}