// Your code here...#
#include<stdio.h>
int main(){
    char s[100];
    char a[100];
    int b=0;
    for(int i=0;i<100;i++){
        scanf("%s",s);
    }
    for(int i=0;i<100;i++){
        if(s[i]==' '||s[i]=='a' ||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            a[b]=s[i];
            b++;
        }


    }
    for(int i=0;i<100;i++){
        printf("%c",a[i]);
    }
}