bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    // Write your code here.
    /*int n= arr.size();
    int low =0; 
    int high = n-1;
    //base case 
    
    while(low <= high){
        int mid = (low + high)/2;
        //base case
        if(arr[mid] == k) return true;

        //duplicates---> a[low]=a[mid]= a[high];
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low =low + 1;
            high = high -1;
            continue;              //continue from while
        } 


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
        
    }
    return false;*/
    int n = arr.size(); // size of the array.
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return true;

        //Edge case:
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
}
