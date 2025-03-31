// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
int  fibonacciSeries(int n){
    int a=0;
    if(n==1){
        return fibonacciSeries(n)=0;
    }
    else if(n==2 || n==3){
        return fibonacciSeries(n)=1;
    }
    else{
        return  fibonacciSeries(n-1)+ fibonacciSeries(n-2);
    }
    }

