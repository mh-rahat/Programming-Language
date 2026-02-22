#include<stdio.h>
#include<math.h>

int main() {
    int a, b; 
    a = 5; b = 3; 

    int sum = a + b; 
    int multiply = a * b; 
    int power = (int) round(pow(a,b));
    printf("%d", power);

    return 0;
}