// Your code here...
#include<stdio.h>
int main(){
    char ch[20];
    for(int i=0;i<20;i++){
        scanf("%c",&ch[i]);

    }
    char a[1];
    
    scanf("%c",&a[i]);
    int c=0;
    for(int i=0;i<20;i++){
        if(ch[i]==a[i]){
            c++;
        }
    }
    printf("%d",c);
}