#include <stdio.h>

int main() {

     
    int n;
    scanf("%d",&n);
    
   do{
       printf("%d",n);
       if(n==1)
       break;
       printf(" -> ");
       if(n%2== 0)
           n = n / 2;
       else 
           n=3*n+1;
       
           
       
   }while(1);
       
    
    return 0;
}
