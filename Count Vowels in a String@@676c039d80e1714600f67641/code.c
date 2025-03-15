// Your code here...
#include<stdio.h>
int main(){
    char name[60];
    int c=0;
    for(int i=0;i<60;i++){
        scanf("%s",name);
    }
    for(int i=0;i<60;i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||name[i]=='o' || name[i]=='u'){
            c++;
        }
    }
    printf("%d",c);
}