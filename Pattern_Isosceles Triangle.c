#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    
    if(n<2)
        printf("Shape Not Possible");
    
    for(int i=1;i<=n;++i){
      
        for(int k=2;k<=n-i+1;++k){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j)
        if(n>1)
            printf("*");
        
       
            
        
    printf("\n");
    
    }
    return 0;
}