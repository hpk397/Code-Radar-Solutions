// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a=65;
        for(int j=0;j<=i;j++){
            printf("%c ",a);
            a++;
        }printf("\n");
    }
}