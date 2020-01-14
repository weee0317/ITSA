#include <stdio.h>

int main(int argc, const char * argv[]) {
    float input;
    scanf("%f",&input);
    printf("Fahrenheit = %.2f\nAbsolute temperature = %.2f\n",(input+40.0)*1.8-40.0,input+273.15);
    return 0;
}