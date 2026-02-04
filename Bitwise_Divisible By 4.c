#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long N;
    scanf("%lld", &N);

    
    if ((N & 3) == 0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}
