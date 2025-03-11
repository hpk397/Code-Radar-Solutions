// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a=1;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
        if(i%2==0){
            printf("%d ",a);
            a--;
        }
        else{
            printf("%d ",a);
        }
           
        }
        printf('\n');
    }
}