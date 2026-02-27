#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    int ascending=1;
    int Descending=1;
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<=n-2;++i){
        scanf("%d",&a[i]);
        if(a[i]>a[i+1]){
            ascending=0;
        }
        if(a[i]<a[i+1]){
            Descending=0;
        }
        
    }
    if(ascending){
        printf("Ascending");
    }
    else if(Descending){
        printf("Descending");
    }
    else{
        printf("Not Sorted");
    }
    
    
    
    return 0;
}
