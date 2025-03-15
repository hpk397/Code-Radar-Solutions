// Your code here...
#include<stdio.h>
int bubblesort(int arr[],int n){
    int brr[n];
    int a=arr[0];
    for(int i=0;i<n;i++){

        for (int j=0;j<n;j++){
            if (a>arr[j]){
                a=arr[j];
                
            }
            
        }            
        brr[i]=a;
        arr[i]=brr[i];
    }
} 
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i])
    }
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
    
}