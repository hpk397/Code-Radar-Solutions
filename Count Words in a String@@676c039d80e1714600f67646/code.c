#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int c=1;
    for(int i=0;i<50;i++){
    scanf("%c",&str[i] );}
    for(int i=0;i<50;i++){
        if(str[i]==' '){
            c++;
        }
    }
    printf("%d",c);
}