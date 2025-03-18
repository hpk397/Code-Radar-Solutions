// Your code here...
#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    char ch[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ch[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<k;i++){
        ch[n-i]=ch[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",ch[i]);
    }
}