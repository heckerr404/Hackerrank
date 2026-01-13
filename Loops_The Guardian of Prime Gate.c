#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int j;
    int i;
    scanf("%d",&j);
    if(j<=1){
        printf("None");
    return 0;
    }
    for( i=2;i<=sqrt(j);++i)
        if(j%i==0){
            printf("Composite");
    return 0;
}
        if(j%1==0 && j%j==0)
            printf("Prime");
    return 0;
        
    return 0;
}
