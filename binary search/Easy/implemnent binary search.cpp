int binarySearch(int arr[], int tar){
    int n= arr.size();
    int low = 0;
    int high = n-1;
    int mid =(low + high) /2;
    while(low <= high){
        
        //compare
        if(arr[mid] == tar){
            return mid;
        }
        else if(tar > arr[mid]){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}