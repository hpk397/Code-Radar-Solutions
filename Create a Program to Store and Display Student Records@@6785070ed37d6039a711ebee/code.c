// Your code here...
#include<stdio.h>
struct Student{
    int rollnumber;
    char  name[90];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&Student.rollnumber , &Student.name,&Student.marks);
    }
}