//Your code here...
#include<stdio.h>
int main(){
    int age,c;
    scanf("%d %d",&age,&c);
    if (age>17 && c==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}