// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    char a[10],b[10];
    for(int i=0;i<10;i++){
        scanf("%s",a);
    }
    for(int i=0;i<10;i++){
        b[i]=a[10-i];
    }

    
    for(int i=0;i<14;i++){
        printf("%d",b[i]);
    }
}