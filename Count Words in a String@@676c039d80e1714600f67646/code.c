#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int c=1;
    
        scanf("%s",&str );
        
    for(int i=0;i<strlen(str);i++){
        if(str[i]== ' ' ){
            c++;
        }
    }
    printf("%d",c);
}