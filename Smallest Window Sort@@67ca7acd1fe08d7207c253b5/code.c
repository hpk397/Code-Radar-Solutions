// Your code here...
int findUnsortedSubarray(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        
            if(arr[i]>arr[i+1] || arr[i]<arr[i-1]){
                c++;
            }
            else{
                continue;
            }
        
    }
    return c;
}