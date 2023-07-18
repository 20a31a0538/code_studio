int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low =0; 
    int high = n-1;
    //base case 
    
    while(low <= high){
        int mid = (low + high)/2;



        //check for sorted

        //left sorted
        if(arr[low] <= arr[mid]){
            //check target is between low and mid
            if(arr[low] <= k && k <= arr[mid]){
                high =mid -1;           //eliminate right half
            }
            else{
                low = mid +1;             //eliminate left half
            }
        }
        //right sorted
        else{
            //check target is between mid+1 and high
            if(arr[mid ] <= k && k <= arr[high]){
                low =mid + 1;           //eliminate left half
            }
            else{
                high = mid - 1;             //eliminate left half
            }
        }
        //base case
        if(arr[mid] == k) return mid;
    }
    return -1;
}
