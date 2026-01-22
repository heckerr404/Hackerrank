#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    int i=1,count=0;
    while(count<n){
    if(i%3!=0){
            printf("%d ",i*i); 
    count++;
       
    }
    i++;
    }
    return 0;
}