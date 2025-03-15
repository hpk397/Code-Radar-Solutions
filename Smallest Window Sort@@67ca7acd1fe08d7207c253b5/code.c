// Your code here...
int findUnsortedSubarray(int arr[],int n){
    // int c=0;
    // for(int i=0;i<n;i++){
    //         if(i!=n-1 && arr[i]>arr[i+1]  ){
    //             c++;
    //         }
    //         else if(i!=0 && arr[i]<arr[i-1]){
    //             c++;
    //         }
    //         else{
    //             continue;
    //         }
        
    // }
    // return c;
    int m,a;
    for(int i=0;i<n;i++){
        while (arr[i]<arr[i+1]){
            m=i+1;
        }
    }
    for(int i=n;i>0;i--){
        if(arr[i]>arr[i-1]){
            a=i;
        }
        else{
            break;
        }
    }
    return a-m;
}