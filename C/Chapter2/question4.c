// solve those problems. 
// a. 5*2-2*3 
// b. 5*2/2*3
// c. 5*(2/2)*3 
// d. 5+2/2*3 


#include<stdio.h>
#include<math.h>

int main() {

    // solution of a 
    int a = 5 * 2 - 2 * 3; 
    printf("%d \n", a); // solution is 4 

    // solution of b 
    int b = 5 * 2 / 2 * 3; 
    printf("%d \n", b); // solution is 15 

    // solution of c 
    int c = 5 * (2 / 2) * 3; 
    printf("%d \n", c); // solution is 15 

    // solution of d 
    int d = 5 + 2 / 2 * 3; 
    printf("%d \n", d); // solution is 8 

    return 0;
}