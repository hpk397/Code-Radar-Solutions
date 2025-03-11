// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    a=67;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            a=67;
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}