#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    
    if(n<2){
        printf("Shape Not Possible");
        return 0;
    }
  
    int center = n - 1;

    for (int i = 0; i <2*n-1; i++) {
        for (int j = 0; j <2*n-1; j++) {

            if (i == center || j ==center || ( i < center && (i + j== center || j - i== center))  )
                printf("*");
            else if (i > center && (i - j ==center || i+j==3*center))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}