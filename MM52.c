#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long long int perfect_num[7] = {6, 28, 496, 8128, 33550336, 8589869056LL, 137438691328LL};
    long long int input;

    /*for(i = 0; i < 7; i++)
    {
        printf("%d\n", perfect_digital[i]);
    }*/

    scanf("%lld", &input);

    for(i = 0; i < 7; i++)
    {
        if(input > perfect_num[i])
        {
            printf("%lld\n", perfect_num[i]);
        }
    }

    return 0;
}