#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,p=1,s=0,digit;
    scanf("%d",&n);
    
    for(int i=n;i>0;i/=10){
   digit=i%10;
    p*=digit;
    s+=digit;
    }
    
    printf("%d",p-s);
    return 0;
}
