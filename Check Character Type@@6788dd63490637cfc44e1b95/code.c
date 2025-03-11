// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else if (ch=='0' ||ch=='1' ||ch=='2' ||ch=='3' ||ch=='3' ||ch=='4' ||ch=='5' ||ch=='6' ||ch=='7' ||ch=='8' ||ch=='9'){
        printf("Digit");
    }
    else if(((int)ch >64 && (int)ch <91 )||((int)ch >96 && (int)ch<123)){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
}