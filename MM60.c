#include<stdio.h>
#include <string.h>
#include <stdlib.h>
float median(int,int[]);
int main()
{
    int x[100],i=0,integer;
    float fl;
    char input[1024],*ptr;
    fgets(input,sizeof(input),stdin);
    ptr = strtok(input,"\t \n\0");
    while(ptr){
        x[i++] = atoi(ptr);
        ptr = strtok(NULL," \t");
    }
    fl=median(i, x);
    integer=(int)fl;
    if ((fl-0.5)<integer) {
        printf("Median=%d\n",integer);
    }
    else
        printf("Median=%.1f\n",fl);
    return 0;
}

float median(int n, int x[]) {
    float temp;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(x[j] < x[i]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    
    if(n%2==0) {
        return((x[n/2] + x[n/2 - 1]) / 2.0);
    }
    else {
        return x[n/2];
    }
}