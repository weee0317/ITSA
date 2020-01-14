#include    <stdio.h>
#include    <stdlib.h>
#define Max 100

int main(void)
{
    int match[Max][Max];
    int i,j,weight;

    while(scanf("%d",&weight)!=EOF)
    {
          for(i=1;i<=weight;i++)
          {
              for(j=1;j<=weight;j++)
              {
                  scanf("%d",&match[i][j]);
              }
          }
          int max=0;
          int boy=0,girl=0,run=0;
          int b_visited[Max]={0},g_visited[Max]={0};


          while(run<weight)
          {
              for(i=1,max=0;i<=weight;i++)
              {
                  if(b_visited[i]==1){continue;}
                  for(j=1;j<=weight;j++)
                  {
                        if(match[i][j] > max && g_visited[j]!=1)
                        {
                            max = match[i][j];
                            boy = i;
                            girl = j;
                        }
                  }
              }
              b_visited[boy] = 1;
              g_visited[girl] = 1;
              run++;
              printf("boy %d pair with girl %d\n",boy,girl);
          }
    }
    return 0;
}