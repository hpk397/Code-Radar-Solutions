// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void  fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c=1;
    int z=n-2;
    printf("%d %d ",a,b);
    while(z>0){
    
    printf("%d ",c);
    c=a+b;
    a=b;
    b=c;
    z--;
    }   
     }

