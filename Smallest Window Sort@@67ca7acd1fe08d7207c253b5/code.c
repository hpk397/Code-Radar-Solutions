// Your code here...
int findsortedSubarray(arr,n){
    int c=0;
    for(int i=0;i<n;i++){
        
            if(arr[i]>arr[i+1]){
                c++;
            }
        
    }
    return c;
}