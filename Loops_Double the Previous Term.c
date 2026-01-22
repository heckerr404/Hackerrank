#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int j=1;
    printf("<");
    for(int i=1;i<=n;++i){
        printf("%d",j);
        if(i!=n){
            printf(" ");
            j*=2;
        }
        
    }
    printf(">");
    return 0;
}