#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int x,max=-999;
    char input[1024],*ptr;
    fgets(input,sizeof(input),stdin);
    ptr = strtok(input,"\t \n\0");
    while(ptr){
        x = atoi(ptr);
        if (x>max) {
            max=x;
        }
        ptr = strtok(NULL," \t");
    }
    printf("%d\n",max);
    return 0;
}