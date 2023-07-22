int possible(vector<int> &arr, int pages){
    int cntSdt = 1; long long pageStd = 0;
    for(int i=0; i< arr.size(); i++){
        if(pageStd + arr[i] <= pages){
            pageStd+= arr[i];
            
        }
        else{
            cntSdt++;
            pageStd = arr[i];
        }
    }
    return cntSdt;
}


int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(),0);
   
    while(low <= high){
        int mid = (low+ high)/2;
        if(possible(arr, mid) > m){
            
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    return findPages(boards, boards.size(), k);
}