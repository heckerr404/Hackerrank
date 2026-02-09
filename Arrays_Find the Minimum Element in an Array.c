#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    scanf("%d",&a[0]);
    int min=a[0];
    
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
