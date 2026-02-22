#include<stdio.h>
#include<math.h>

int main() {
    int a, b; 
    a = 5; b = 3; 

    int sum = a + b; 
    int multiply = a * b; 
    int power = (int) round(pow(a,b));
    printf("%d \n", power);

    // for find out the reminder, then we have to use the modular operator (%)
    printf("%d \n", 10 % 2);
    printf("%d \n", 12 % 2);
    printf("%d \n", 15 % 6);
    printf("%d \n", -10 % 3);

    // Type conversion 
    printf("%d \n", 2 * 2);
    printf("%f \n", 2 * 2.2);
    printf("%f \n", 2.2 * 2.2);

    printf("%d \n", 2 / 2);
    printf("%f \n", 2 / 2.2);
    printf("%f \n", 2.5 / 2.2);




    return 0;
}