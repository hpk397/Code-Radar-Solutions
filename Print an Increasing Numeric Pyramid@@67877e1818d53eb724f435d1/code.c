// Your code here...
#include<stdio.h>
int main(){
    int n;
    for(int i=1;i<=n;i++){
        for (int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}