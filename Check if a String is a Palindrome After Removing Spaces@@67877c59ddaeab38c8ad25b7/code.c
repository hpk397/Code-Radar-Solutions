// Your code here...
#include<stdio.h>
int main(){
    char ch[30],ch2[30],ch3[30];
    int count=0;
    for(int i=0;i<30;i++){
        scanf("%d",ch);
    }
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    int a=0;
    int b=0;
    for(int i=count-1;i>=0;i--){
        if(ch[i]!=' '){
            ch2[a]=ch[i];
            a++;
        }

    }
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=' '){
            ch3[b]=ch[i];
            b++;
        }
    }
    if(ch2==ch3){
        printf("Yes");
    }
    else{
        printf("No");
    }
    

}