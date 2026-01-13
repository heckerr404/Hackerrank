#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUTS */ 
      int A;
    scanf("%d",&A);

    if (A<=0) {
        printf("Invalid amount");
        return 0;
    }

    int notes500= A / 500;
    A = A % 500;

    int notes200=A / 200;
    A = A % 200;

    int notes100= A / 100;

    printf("500-rupee notes: %d\n", notes500);
    printf("200-rupee notes: %d\n", notes200);
    printf("100-rupee notes: %d\n", notes100);
    return 0;
}
