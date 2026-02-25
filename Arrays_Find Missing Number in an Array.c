#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i=1;i<=n;++i) {
        a[i]=0;
    }

    int x;
    for (int i=0;i<n-1;++i) {
        scanf("%d",&x);
        a[x]=1;
    }

    for (int i=1;i<=n;++i) {
        if (a[i]==0) {
            printf("%d",i);
            break;
        }
    }

    return 0;
}

