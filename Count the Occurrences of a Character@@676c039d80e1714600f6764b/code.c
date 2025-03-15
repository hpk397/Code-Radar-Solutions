// Your code here...
#include<stdio.h>
int main(){
    char ch[10];
    for(int i=0;i<10;i++){
        scanf("%c",&ch[i]);

    }
    char a;
    int c=0;
    scanf("%c",&a);
    for(int i=0;i<10;i++){
        if(ch[i]==a){
            c++;
        }
    }
    printf("%d",c);
}