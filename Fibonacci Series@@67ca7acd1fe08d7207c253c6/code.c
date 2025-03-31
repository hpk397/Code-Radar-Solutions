// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void  fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c=a+b;
    int z=n-2;
    printf("%d %d ",a,b);
    while(z>0){
    
    
    c=a+b;printf("%d ",c);
    a=b;
    b=c;
    z--;
    }   
     }

