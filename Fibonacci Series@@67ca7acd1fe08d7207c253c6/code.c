// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void fibonacciSeries(int n){
    int a=0;
    if(n==1){
        a=0;
        printf("%d ",a);
    }
    else if(n==2 || n==3){
        a=1;
        printf("%d ",a);
    }
    else{
        printf("%d ", fibonacciSeries(n-1)+ fibonacciSeries(n-2));
    }}

