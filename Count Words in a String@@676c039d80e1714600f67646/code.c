#include<stdio.h>
int main(){
    char str[100];
    for(int i=0;i<100;i++){
        scanf("%s",str[i]);
    }
    int c=0;
    for(int i=0;i<100;i++){
        if(str[i]==' '){
            c++;
        }
    }
    printf("%d",c);
}