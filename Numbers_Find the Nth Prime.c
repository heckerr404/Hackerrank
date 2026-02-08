#include <stdio.h>

int main() {
    
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    scanf("%d", &n);

    int count = 0;

    for (int m=2; ;++m) {
        int prime = 1;

        for (int i=2;i*i<=m;++i) {
            if (m%i==0) {
                prime=0;
                break;
            }
        }

        if (prime) {
            count++;
            if (count==n) {
                printf("%d", m);
                break;
            }
        }
    }
   
    
    return 0;
}