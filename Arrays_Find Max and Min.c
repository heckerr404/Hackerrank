#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,min,max;
    scanf("%d",&n);
    
    int a[n];
    
    scanf("%d",&a[0]);
    min=a[0],max=a[0];
  for(int i=1;i<=n-1;++i){
      scanf("%d",&a[i]);
      if(a[i]>max){
          max=a[i];
      }
      else if(a[i]<min){
          min=a[i];
      }
      
  }
    printf("%d %d ", max, min);
    
    return 0;
}