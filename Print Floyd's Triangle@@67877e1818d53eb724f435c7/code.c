// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",a);
            a++;
        }printf("\n");
    }
}