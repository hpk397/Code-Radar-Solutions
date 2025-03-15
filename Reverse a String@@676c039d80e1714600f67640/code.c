// Your code here...
#include<stdio.h>
int main(){
    char name[50];
    gets(name);
    for(int i=50;i>0;i--){
        printf("%c",name[i]);
    }
}