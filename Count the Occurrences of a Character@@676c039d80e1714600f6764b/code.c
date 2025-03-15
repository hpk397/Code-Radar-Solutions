// Your code here...
#include<stdio.h>
int main(){
    char ch[20];
    for(int i=0;i<20;i++){
        scanf("%c",&ch[i]);

    }
    char a[2];
    
    scanf("%c",&a[2]);
    int c=0;
    for(int i=0;i<20;i++){
        if(ch[i]==a){
            c++;
        }
    }
    printf("%d",c);
}