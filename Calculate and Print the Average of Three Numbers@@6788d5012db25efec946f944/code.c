#include <stdio.h>

int main() {
    char ch[9],ch2[9],ch3[9];
    scanf("%d %d %d",ch,ch2,ch3);
    float avg=(ch+ch2+ch3)/3;
    printf("Average: %.2f",avg);
    return 0;
}