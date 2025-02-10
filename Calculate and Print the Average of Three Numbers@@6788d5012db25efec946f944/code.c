#include <stdio.h>

int main(){
    char ch[9],ch2[9],ch3[9];
    scanf("%s%s%s",ch,ch2,ch3);
    float avg;
     avg=((int)ch[0]+(int)ch2[0]+(int)ch3[0])/3.0;
    printf("Average: %.2f",avg);
    return 0;
}