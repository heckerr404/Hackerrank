#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
         int n, i;
    scanf("%d %d", &n, &i);

    printf("%d", (n >> i) & 1);
                
    return 0;
}