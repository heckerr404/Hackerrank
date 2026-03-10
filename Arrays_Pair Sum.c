#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    
    for(int i=0;i<=n-1;++i){
        for(int j=i+1;j<=n-1;++j){
            if(a[i]+a[j]==m){
                printf("%d %d",a[i],a[j]);
                return 0;
            }
        }
    }
    
    printf("-1");
    
    return 0;
}