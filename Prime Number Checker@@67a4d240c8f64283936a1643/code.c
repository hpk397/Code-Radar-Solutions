// Your code here...
#include<stdio.h>
int isPrime(int num){
    int a=1;
    if(num==1){
        a=0;
        return a;
    }
    for(int i=2;i<num;i++){
        if(num%i==0)
        {
            a=1;
            break;
            
        }
        
    }
    return a;
    
}