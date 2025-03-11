// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
        if(i%2==0){
        if(k%2==0){
            printf("1");
        }
        else{
            printf("0");
        }
        }
        else{
            if(k%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        }
        printf("\n");
    }
}