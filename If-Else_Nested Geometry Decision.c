#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        int n;
    scanf("%d", &n);

        
    if (n == 0) {
        printf("Circle");
    }

  
    else if (n == 3) {
        int a, b, c, A, B, C;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);

      
        if (a <= 0 || b <= 0 || c <= 0 ||
            A <= 0 || B <= 0 || C <= 0 ||
            A + B + C != 180 ||
            a + b <= c || b + c <= a || a + c <= b) {
            printf("Invalid Figure");
        }
        else if (a == b && b == c && A == 60 && B == 60 && C == 60) {
            printf("Equilateral Triangle");
        }
        else if ((a == b && A == B) ||
                 (b == c && B == C) ||
                 (a == c && A == C)) {
      
            printf("Isosceles Triangle");
        }
        else {
            printf("Scalene Triangle");
        }
    }

   
    else if (n == 4) {
        int a, b, c, d, A, B, C, D;
        scanf("%d %d %d %d %d %d %d %d",
              &a, &b, &c, &d, &A, &B, &C, &D);

        /* Validate first */
        if (a <= 0 || b <= 0 || c <= 0 ||
            A <= 0 || B <= 0 || C <= 0 || D <= 0 ||
            A + B + C + D != 360) {
            printf("Invalid Figure");
        }
        else if (a == b && b == c && c == d &&
                 A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Square");
        }
        else if (a == c && b == d &&
                 A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Rectangle");
        }
        else if (a == b && b == c && c == d &&
                 A == C && B == D) {
            printf("Rhombus");
        }
        else if (a == c && b == d &&
                 A == C && B == D) {
            printf("Parallelogram");
        }
        else {
            printf("Invalid Figure");
        }
    }

    else {
        printf("Invalid Figure");
    }
    return 0;
}