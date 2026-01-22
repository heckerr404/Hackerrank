#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,j;
    scanf("%d %d",&n,&j);
    
    for(int i=1;i<=n;++i)
       
            printf("%d ",i*j);
    return 0;
}