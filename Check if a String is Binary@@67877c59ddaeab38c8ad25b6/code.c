// Your code here...
#include<stdio.h>
int main(){
    char s[15];
    int a=0;
    for(int i=0;i<15;i++){
        scanf("%c",&s[i]);
    }
    for(int i=0;i<15;i++){
        if(s[i]!=1 || s[i]!=0){
            a=1;
            break;
        }
    
    }if(a==0) printf("Yes");
    else{printf("No");
    }
}