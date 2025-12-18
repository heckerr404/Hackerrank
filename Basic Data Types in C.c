#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,b,c,d,e);
    return 0;
}
