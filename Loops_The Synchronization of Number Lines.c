#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d %d ",&a,&b);
    
    
       for(int i=2;;++i){
           
       
           if(i%a==0 && i%b==0){
               printf("%d",i);
               return 0;
           }
               
          
       }
    
    return 0;
}
