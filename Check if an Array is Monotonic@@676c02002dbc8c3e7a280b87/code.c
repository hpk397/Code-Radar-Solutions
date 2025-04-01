// Your code here...
#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    if(a[i]>a[i+1] && a[i]>a[i-1]){
        printf("NO");
        break;
    }
    else if(a[i]<a[i+1] && a[i]<a[i-1]){
        printf("NO");
        break;
    }
else{
    printf("Yes");
}
    }
}