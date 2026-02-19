#include<stdio.h>

int main() {
    int num1, num2;
    printf("Enter capital number : ");
    scanf("%d", &num1);

    printf("Enter small number : ");
    scanf("%d", &num2);

    printf("The sum is : %d \n", num1 + num2 );
    printf("The difference is : %d \n", num1 - num2);
    printf("The multiplication is : %d \n", num1 * num2);
    printf("The division is : %d \n", num1 / num2);


    return 0;
}