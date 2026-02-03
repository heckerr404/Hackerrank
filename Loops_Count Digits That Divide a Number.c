#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
   


    int num;
    scanf("%d", &num);

    int a= num;
    int count = 0;

    while (num > 0) {
        int b= num % 10;

        if (a % b == 0) {
            count++;
        }

        num /= 10;
    }

    printf("%d", count);


    return 0;
}
