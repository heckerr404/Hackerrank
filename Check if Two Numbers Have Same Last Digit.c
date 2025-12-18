#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
   
    scanf("%d %d",&a,&b);
    
    if((a%10) == (b%10))
    
         printf("YES");   
        
    else
        printf("NO");
    
    
    
    return 0;
}
