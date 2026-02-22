// do int 1.999999 in a single int type 

#include<stdio.h>


#include<math.h>

int main() {
    int num = (int) round(1.999999); 
    printf("%d", num);
    
    return 0; 
}