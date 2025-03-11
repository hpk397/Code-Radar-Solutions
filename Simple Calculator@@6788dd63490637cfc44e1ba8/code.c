// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char c;
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if (c=='*'){
        printf("%d",a);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    
    }