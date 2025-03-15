// Your code here...
#include<stdio.h>
int main(){
    char name[10];
    int c=0;
    for(int i=0;i<10;i++){
        scanf("%s",name);
    }
    for(int i=0;i<10;i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' ||name[i]=='O' || name[i]=='U'){
            c++;
        }
        
    }
    printf("%d",c);
}