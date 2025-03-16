// Your code here...
#include<stdio.h>
int main(){
    char ch[90];
        fgets(ch, 90, stdin);

    char a;
    scanf("%c",&a);
    for(int i=0;i<90;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            ch[i]=a;
        }
    }
    for(int i=0;i<90;i++){
        printf("%c",ch[i]);
    }
    
}