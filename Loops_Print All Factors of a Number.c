#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int j;
    scanf("%d",&j);
    
    for(int i=1;i<=j;++i)
        if(j%i==0)
        
         printf("%d ",i);
    
    return 0;
}
