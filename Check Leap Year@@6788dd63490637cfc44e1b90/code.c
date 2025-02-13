// Your code here...
#include<stdio.h>
int main(){
    int yr;
    scanf("%d",&yr);
    if (n%4==0){
        if ((n%100 && n%400) || (n%100!=0)){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
}