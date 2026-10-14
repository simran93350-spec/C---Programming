#include <stdio.h>
#include <math.h>
int main(){
    float a, b,perimeter;
    a = b = 2;
    printf("enter a");
    scanf("%f", &a);

    printf("enter b");
    scanf("%f", &b);

    printf("perimeter is: %f \n", 2*(a + b));

    return 0;
}