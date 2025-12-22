#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        
        int a,b,c,d,e,f,g,h,i,j;
        scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
        
        int  index,rotate;
        scanf("%d %d",&index,&rotate);
        if(index==0){
                a +=rotate;
                if(a>9)
                        a -=10;
        }
        
        if(index==1){
                b +=rotate;
                if(b>9)
                        b -=10;
        }
       if(index==2){
                c +=rotate;
                if(c>9)
                        c -=10;
        }
        
        if(index==3){
                 d +=rotate;
                if(d>9)
                        d -=10;
        }
        if(index==4){
                 e +=rotate;
                if(e>9)
                        e -=10;
        }
        if(index==5){
                 f +=rotate;
                if(f>9)
                        f -=10;
        }
       if(index==6){
                 g +=rotate;
                if(g>9)
                        g -=10;
        }
        if(index==7){
                 h +=rotate;
                if(h>9)
                        h -=10;
        }
       if(index==8){
                 i +=rotate;
                if(i>9)
                        i -=10;
        }
       if(index==9){
                 j +=rotate;
                if(j>9)
                        j -=10;
        }
        
        scanf("%d %d",&index,&rotate);
         if(index==0){
                a +=rotate;
                if(a>9)
                        a -=10;
        }
        
        if(index==1){
                b +=rotate;
                if(b>9)
                        b -=10;
        }
       if(index==2){
                c +=rotate;
                if(c>9)
                        c -=10;
        }
        
        if(index==3){
                 d +=rotate;
                if(d>9)
                        d -=10;
        }
        if(index==4){
                 e +=rotate;
                if(e>9)
                        e -=10;
        }
        if(index==5){
                 f +=rotate;
                if(f>9)
                        f -=10;
        }
       if(index==6){
                 g +=rotate;
                if(g>9)
                        g -=10;
        }
        if(index==7){
                 h +=rotate;
                if(h>9)
                        h -=10;
        }
       if(index==8){
                 i +=rotate;
                if(i>9)
                        i -=10;
        }
       if(index==9){
                 j +=rotate;
                if(j>9)
                        j -=10;
        }
        
         scanf("%d %d",&index,&rotate);
         if(index==0){
                a +=rotate;
                if(a>9)
                        a -=10;
        }
        
        if(index==1){
                b +=rotate;
                if(b>9)
                        b -=10;
        }
       if(index==2){
                c +=rotate;
                if(c>9)
                        c -=10;
        }
        
        if(index==3){
                 d +=rotate;
                if(d>9)
                        d -=10;
        }
        if(index==4){
                 e +=rotate;
                if(e>9)
                        e -=10;
        }
        if(index==5){
                 f +=rotate;
                if(f>9)
                        f -=10;
        }
       if(index==6){
                 g +=rotate;
                if(g>9)
                        g -=10;
        }
        if(index==7){
                 h +=rotate;
                if(h>9)
                        h -=10;
        }
       if(index==8){
                 i +=rotate;
                if(i>9)
                        i -=10;
        }
       if(index==9){
                 j +=rotate;
                if(j>9)
                        j -=10;
        }
        
        printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
        
    return 0;
}