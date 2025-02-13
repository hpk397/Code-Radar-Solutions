// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((int)ch>=65 &&(int)ch<=90){
        printf("Uppercase");
    }
    else if ((int)ch>=97 &&(int)ch<=127){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}