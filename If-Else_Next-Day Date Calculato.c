#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    int maxDay;
    
     if (m == 2) {
       
        if ( (y%400==0) || (y%4==0 && y%100!=0) )
            maxDay = 29;
        else
            maxDay = 28;
    }
    else if (m==4 || m ==6 || m==9 || m==11) {
        maxDay = 30;
    }
    else {
        maxDay = 31;
    }
    if (d< maxDay) {
        d++;
    }
    else {
        if(d==maxDay)
        d=1;
        if (m< 12) {
            m++;
        }
        else {
            m= 1;
            y++;
        }
    }


    printf("%02d-%02d-%04d", d, m, y);
    
    
    return 0;
}
