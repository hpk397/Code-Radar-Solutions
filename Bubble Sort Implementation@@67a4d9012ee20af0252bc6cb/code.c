// Your code here...
#include<stdio.h>
bubblesort(int arr[], n){
    int brr[n];
    int a=arr[0];
    for(int i=0;i<n;i++){
        
        for (int j=0;j<n;j++){
            if (a>arr[j]){
                a=arr[j];
                
            }
            
        }            
        brr[i]=a;

    }
}