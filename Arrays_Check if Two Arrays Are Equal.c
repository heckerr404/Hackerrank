#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    
    int a[n],i;
    for(i=0;i<=n-1;++i){
        scanf("%d ",&a[i]);
        
    }
    int m,j;
    scanf("%d",&m);
    
    int b[m];
    for(j=0;j<=m-1;++j){
        scanf("%d ",&b[j]);
            
    }
     for (int i=0;i<=n-1;i++) {
        if(a[i]!=b[i]){
            printf("Not Equal");
            return 0;
        }
    }
    if(n!=m){
       printf("Not Equal");
    }
    
    else if(i!=j){
        printf("Not Equal");
    }
    
    else {
        printf("Equal");
    } 
    return 0;
}
