#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     
    int n;
    scanf("%d",&n);
    
    int a[n],i;
    
    double sum=0;
    for(i=0;i<=n-1;++i){
        scanf("%d", &a[i]);
        sum+=a[i];
        
    }
    double average=sum/n;
    int count=0;
   for(int i=0;i<=n-1;++i){
    if(a[i]>average){
        count++;
    }
    
   }
 
    printf("%d",count);
    
    return 0;
}
