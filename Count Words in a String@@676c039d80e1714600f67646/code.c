#include<stdio.h>
int main(){
    char str[20];
    for(int i=0;i<20;i++){
        scanf("%s",&str[i]);
    }
    int c=1;
    for(int i=0;i<20;i++){
        if(str[i]==' '){
            c++;
        }
        else{
            continue;
        }
    }
    printf("%d",c);
}