#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char input[1000];
    char *temp;
    int i, amount = 0, max = 0, max_index = 0;
    int number[10] = {0};
    bool exist = true;

    fgets(input, 1000, stdin);

    temp = strtok(input, " \n\r");

    while(temp != NULL)
    {
        int num = *temp - '0';

        for(i = 0; i < 10; i++)
        {
            if(num == i)
            {
                number[i]++;
                amount++;
                break;
            }
        }

        //printf("%d\n", num);

        temp = strtok(NULL, " \n\r");
    }

    for(i = 0; i < 10; i++)
    {
        if(number[i] > max)
        {
            max = number[i];
            max_index = i;
        }
    }

    /*for(i = 0; i < 10; i++)
    {
        printf("number[%d] = %d\n", i, number[i]);
    }
    printf("max = %d\n", max);
    printf("amount = %d\n", amount);
    printf("max_index = %d\n", max_index);*/

    for(i = 0; i < 10; i++)
    {
        if(number[i] == max && i != max_index)
        {
            exist = false;
        }
    }

    if(max > amount/2 && exist == true)
    {
        printf("Majority is %d\n", max_index);
    }
    else
    {
        printf("No Majority\n");
    }

    return 0;
}