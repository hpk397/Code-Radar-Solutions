// Your code here...
#include<stdio.h>
int main(){
    char a[10];
    char b[10];
    for(int i=0;i<10;i++){
        scanf("%c",&a[i]);
    }
    for(int i=0;i<10;i++){
        scanf("%c",&b[i]);
    }
    printf("%s%s",a,b);
}