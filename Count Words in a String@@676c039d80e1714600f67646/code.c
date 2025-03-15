#include<stdio.h>
int main(){
    char str[20];
    for(int i=0;i<20;i++){
        scanf("%c",&str[i]);
    }
    int c=1;
    for(int i=0;i<20;i++){
    while(str[i]!='\0'){
        if(str[i]==' '){
            c++;
        }
        else{
            continue;
        }
    }}
    printf("%d",c);
}