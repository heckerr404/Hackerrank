#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j){
            printf("%d ",n-j+1);
        }
            
          printf("\n");
}
    return 0;
}
