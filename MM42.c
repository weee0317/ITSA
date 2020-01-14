#include<stdio.h>
#define MAX 7
int main()
{
    long long perfectnum[MAX] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328}, num;
    int i=0, ans;
    scanf("%lld", &num);
    while (perfectnum[i]<num) {
        i++;
    }
    for (ans=0; ans<i; ans++) {
        printf("%lld ",perfectnum[ans]);
    }
    printf("is perfect number\n");
    return 0;
}