// Your code here...
#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    for(int i=0;i<100;i++){
        scanf("%s",a);
        scanf("%s",b);
    } 
    char c[200];
    c[0]=a[0];
    c[1]=a[1];
    printf("%s",c);
}