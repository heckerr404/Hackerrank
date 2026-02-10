#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    int a[n];
    double sum=0;
    for(int i=0;i<n;++i){
        
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    double average=sum/n;
    
    printf("%0.6f",average);
    return 0;
}
