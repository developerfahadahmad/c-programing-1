#include <stdio.h>


int main() {

    int num1 = 49;
    float num2 = 20.3456F;
    char num3 = 'V';


    printf("%d\n", num1);
    printf("%f\n", num2);
    printf("%c\n", num3);

    num1 = num2;
    printf("%d\n", num1);


    return 0;
}