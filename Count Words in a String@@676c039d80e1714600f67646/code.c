// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    for(int i=0;i<100;i++){
        scanf("%s",str[i]);
    }
    int c=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            c++;
        }
    }
    printf("%d",c);
}