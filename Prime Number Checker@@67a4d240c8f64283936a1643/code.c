// Your code here...
#include<stdio.h>
int isPrime(int num){
    int a=0;
    if(num==1){
        a=0;

        return a;
    }
    if(num==2)
{
    a=1;
    return a;
}    for(int i=2;i<num;i++){
        if(num%i==0)
        {
            a=0;
            break;
            
        }
        else{
            a=1;
        }

        
    }
    return a;
    
}