#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    int i;
    for(i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
      
    }
    
    int pos;
    scanf("%d",&pos);
    
    
    for(int i=0;i<=n-1;++i){
    if(a[i]==pos){
        printf("%d",i);
        return 0;
    }
      }
    printf("-1");
   
    
    return 0;
}