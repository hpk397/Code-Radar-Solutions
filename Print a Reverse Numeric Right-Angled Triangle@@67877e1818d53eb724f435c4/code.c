// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a=1;
        for(int j=n-i;j>0;j--){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}