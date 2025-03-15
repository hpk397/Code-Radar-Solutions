#include<stdio.h>
int main(){
    char str[20];
    for(int i=0;i<20;i++){
        scanf("%s",str);
    }
    int c=0;
    for(int i=0;i<20;i++){
        if(str[i]==" "){
            c++;
        }
    }
    printf("%d",c);
}