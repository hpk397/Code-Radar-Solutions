#include<stdio.h>
int main(){
    char str[200];
    int c=1;
    for(int i=0;i<200;i++){
        scanf("%s",str );
        
    }
    for(int i=0;i<200;i++){
        if(str[i]==' '){
            c++;
        }
    
    }
    printf("%d",c);
}