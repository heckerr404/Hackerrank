#include <stdio.h>

int main() {

     
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
