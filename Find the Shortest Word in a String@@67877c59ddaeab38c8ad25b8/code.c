// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    for(int i=0;i<50;i++){
        scanf("%s",ch);
    }
    int c=1;
    int a=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            c++;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;ch[j+a]!=' ';j++){

            a++;
        }
    }

}