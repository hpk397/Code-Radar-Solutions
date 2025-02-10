#include <stdio.h>

int main() {
    char ch[9],ch2[9],ch3[9];
    scanf("%s %s %s",ch,ch2,ch3);
    float avg=((int)ch+(int)ch2+(int)ch3)/3;
    printf("Average: %.2f",avg);
    return 0;
}