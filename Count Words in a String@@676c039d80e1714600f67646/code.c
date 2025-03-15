#include<stdio.h>
int main(){
    char str[20];
    for(int i=0;i<20;i++){
        scanf("%s",&str[i]);
    }
    int c=1;
    while(str!='\0'){
        if(str==' '){
            c++;
        }
        else{
            continue;
        }
    }
    printf("%d",c);
}