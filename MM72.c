#include<stdio.h>
int main(void)
{
    int id;
    float cost,unit_sold;
    while(scanf("%d%f%f",&id,&unit_sold,&cost)!=EOF)
    {
        printf("%d %.0f %.2f %.2f %.2f\n",id,unit_sold,cost,unit_sold*cost,unit_sold*cost*0.12);
    }
    return 0;
}