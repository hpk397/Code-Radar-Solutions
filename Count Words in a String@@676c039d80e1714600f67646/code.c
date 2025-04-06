#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int c=0;
    int start=0;
    for(int i=0;i<50;i++){
    scanf("%c",&str[i] );}

    for(int i=0;i<strlen(str);i++){
        if (str[i]!=' ' ){
            start=i;
            break;
        }
        //   if(i=strlen(str ) -1 && str[i]==' '){
        //     start=strlen(str)-1;
        // }
    }
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int c=0;
    int start=0;
        fgets(str, sizeof(str), stdin);


    for(int i=0;i<strlen(str);i++){
        if (str[i]!=' ' ){
            start=i;
            break;
        }
        //   if(i=strlen(str ) -1 && str[i]==' '){
        //     start=strlen(str)-1;
        // }
    }
    if (str[start] == '\0') {
        printf("%d", 0);
        return 0;
    }

    c=1;
    for(int i=start+1;i<50;i++){
        if(str[i]==' ' && str[i-1] != ' '){
            c++;
        }
    }
    // if(start != strlen(str)-1){
    printf("%d",c);
    // }
}

    c=1;
    for(int i=start+1;i<50;i++){
        if(str[i]==' ' && str[i-1] != ' '){
            c++;
        }
    }
    // if(start != strlen(str)-1){
    printf("%d",c);
    // }
}
