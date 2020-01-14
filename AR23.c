#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <ctype.h>

#define Max 10000

int main(void)
{
    char line[Max]={'\0'};
    char ans[Max]={'\0'};
    int i=0,t=0,cnt=0;

    while((fgets(line,Max,stdin))!=NULL)
    {
        cnt=0;
        line[strlen(line)-1]='\0';
        for(i=0;line[i]!='\0';i++)
        {
            t = isalpha(line[i]);
            if(t!=0)
            {
                if(line[i]>='A'&&line[i]<='Z')
                {

                    line[i]='A'+((line[i]-'A')+13)%26;

                }
                else
                {
                    line[i]='a'+((line[i]-'a')+13)%26;
                }

            }
            ans[cnt] = line[i];
            cnt++;
        }
        printf("%s\n",ans);
        for(i=0;i<Max;i++)
        {
            ans[i]='\0';
            line[i]='\0';
        }
    }
    return 0;
}