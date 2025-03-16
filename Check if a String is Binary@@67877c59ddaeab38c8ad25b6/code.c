// Your code here...
#include<stdio.h>
int main(){
    char s[15];
    int a=0;
    for(int i=0;i<15;i++){
        scanf("%s",s);
    }
    for(int i=0;i<15;i++){
        if(s[i]=='1'){
            a=0;
        }
        else if(s[i]=='0'){
            a=0;
        }
        // else{
        //     a=1;
        //     break;
        // }
    }
    if(a==0){ printf("Yes");}
    else{ printf("No");}
}