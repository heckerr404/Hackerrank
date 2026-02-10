#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n;
    scanf("%d",&n);
    
    int a[n];
    long long even_index=0,odd_index=0;
     
    
    
    
    for(int i=0;i<=n-1;++i){
        scanf("%d ",&a[i]);
        
        if(i%2==0){
            even_index+=a[i];
        }
        else 
            odd_index+=a[i];
        
        
        
    }
    printf("%lld",even_index-odd_index);
    return 0;
}
