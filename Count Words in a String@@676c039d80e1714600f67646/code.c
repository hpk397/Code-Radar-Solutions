#include<stdio.h>
int main(){
    char str[200];int c=1;
    for(int i=0;i<200;i++){
        scanf("%c",&str[i]);
        c++;
    }
    
    // for(int i=0;i<200;i++){
    
    //     if(str[i]==' '){
    //         c++;
    //     }
    //     else{
    //         continue;
    //     }
    
    printf("%d",c);
}