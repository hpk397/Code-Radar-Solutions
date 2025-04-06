#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int c=0;
    int start=0;
    for(int i=0;i<50;i++){
    scanf("%c",&str[i] );}
    for(int i=0;i<strlen(str);i++){
        if (str[i]!=' ' ){
            start=i;
            break;
        }
    }
    for(int i=start+1;i<50;i++){
        if(str[i]==' ' && str[i-1] != ' '){
            c++;
        }
         if (strlen(str) > 0 && str[0] != ' ' && str[0] != '\n') {
        c++;  // Account for the first word
    }
    }
    printf("%d",c);
}