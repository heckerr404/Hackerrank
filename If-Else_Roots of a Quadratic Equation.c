#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
   
    double D=b*b -4*a*c;
    
    if(D>0){
        double root1=(-b + sqrt(D))/(2*a);
        double root2=(-b - sqrt(D))/(2*a);
        
        printf("Roots: %.2f, %.2f\n",root1,root2);
        printf("Type: Real and Distinct");
                      
        
    }
    
     else if (D == 0) {
        double r = -b / (2.0*a);
        printf("Roots: %.2f, %.2f\n", r, r);
        printf("Type: Real and Equal");
    } 
    else {
        double real = -b / (2.0*a);
        double imag = sqrt(-D) / (2*a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", real, imag, real, imag);
        printf("Type: Complex");
    }
        
    return 0;
}