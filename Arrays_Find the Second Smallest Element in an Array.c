#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int min1;
    int max=a[0];
    int flag=0;
    
    for(int i=0;i<=n-1;++i){
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<=n-1;++i){
        if(a[i]>max)
            max=a[i];
    }
    min1=++max;
    for(int i=0;i<=n-1;++i){
        if(a[i]>min&&a[i]<min1){
            min1=a[i];
            ++flag;
        }
            
            
    }
    
    if(flag)
        
     printf("%d",min1);
    else
       printf("-1");
    return 0;
}
