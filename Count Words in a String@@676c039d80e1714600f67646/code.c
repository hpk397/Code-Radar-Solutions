#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int c=0;
    
    scanf("%s",&str );
    while(str!='\0'){
        c++;
    }
    printf("%d",c);
}