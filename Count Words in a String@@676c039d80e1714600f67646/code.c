#include<stdio.h>
int main(){
    char str[200];
    int c=0;
    for(int i=0;i<200;i++){
        scanf("%s",str );
        
    }
    for(int i=0;i<200;i++){
    while(str[i]!='\0'){
        if(str[i]==' '){
            c++;
        }
    }
    }
    printf("%d",c);
}