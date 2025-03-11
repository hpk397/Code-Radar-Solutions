// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if (k<=(2*i-1) ){
                printf("%d",k);
            }
            else{
                for(int z=k-1;z>0;z--){
                printf("%d",z);}
            }
        }
        printf("\n");
    }
}