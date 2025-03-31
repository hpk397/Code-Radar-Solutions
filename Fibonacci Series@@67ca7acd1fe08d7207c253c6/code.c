// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void fibonacciSeries(int n){
    if(n==1){
        return 0;
    }
    else if(n==2 || n==3){
        return 1;
    }
    else{
        return fibonacciSeries(n-1)+ fibonacciSeries(n-2);
    }}

int main() {
    int n;
    scanf("%d",&n);
    if (n<0){
        printf("Invalid input\n");
    }
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacciSeries(i));
    }

    return 0;
}