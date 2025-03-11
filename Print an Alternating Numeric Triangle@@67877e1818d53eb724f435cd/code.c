// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    a=1; 
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
           if(a==1){
            printf("%d ",a);
            a--;
           }
           else{
            printf("%d ",a);
            a++;
           }
           
           

        }printf('\n');
    }
}