 #include<stdio.h>
int main(){
    char s[15];
    int a=2;
    for(int i=0;i<15;i++){
        scanf("%s",s);
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='1' && s[i]!='0' && s[i]!=' '){
            
            a++;
            break;
         }
        
         
    }
    if(a==2){ printf("Yes");}
    else{ printf("No");}
}