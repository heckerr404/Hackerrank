#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int N;
    scanf("%d", &N);

    int c1, c2, c3;

    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID", N);
    } else {

        if (N % 2 == 0 && N > 10)
            c1 = 1;
        else
            c1 = 0;

        
        if (N > 15 && N % 3 == 0)
            c2 = 1;
        else
            c2 = 0;

        if (N % 7 == 0)
            c3 = 1;
        else
            c3 = 0;
        if (c1 == 1 && c2 == 1 && c3 == 1) {
            printf("The verdict for the number %d is: SUPERNATURAL", N);
        } 
        else {
            if ((c1 == 1 && c2 == 1 && c3 == 0) ||
                (c1 == 1 && c2 == 0 && c3 == 1) ||
                (c1 == 0 && c2 == 1 && c3 == 1)) {

                printf("The verdict for the number %d is: MIRACULOUS", N);
            } 
            else {
                if ((c1 == 1 && c2 == 0 && c3 == 0) ||
                    (c1 == 0 && c2 == 1 && c3 == 0) ||
                    (c1 == 0 && c2 == 0 && c3 == 1)) {

                    printf("The verdict for the number %d is: MAGICAL", N);

                } else {
                    printf("The verdict for the number %d is: NORMAL", N);
                }
            }
        }
    }
    return 0;
}