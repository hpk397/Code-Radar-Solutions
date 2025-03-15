// Your code here...
#include<stdio.h>
int main(){
    char a[10];
    for(int i=0;i<10;i++){
        scanf("%s",a);
    }
    char x,y;
    scanf("%c %c",&x,&y);
    for(int i=0;i<10;i++){
        if(a[i]==x){
            a[i]=y;
        }
    }
    for(int i=0;i<10;i++){
        printf("%c",a[i]);
    }
}