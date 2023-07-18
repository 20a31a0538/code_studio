int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n =arr.size();
	int  low = 1;
	int high = n-2;
	//basecase 1
	if(n==1) return arr[0];
	//basecase 2 --> starting and ending
	//2.1-->starting
	if(arr[0] != arr[1]) return arr[0];
	//2.2 --> ending
	if(arr[n-1] != arr[n-2]) return arr[n-1];

	while(low <= high){
		int mid = (low + high)/2;
		if((arr[mid] != arr[mid-1] ) && (arr[mid] != arr[mid+1])){
			return arr[mid];
		}
		//elimination
                if ((mid % 2 == 1 && arr[mid - 1] == arr[mid]) ||
                    (mid % 2 == 0 && arr[mid + 1] == arr[mid])) {
                  low = mid + 1; // eliminate left part
                }
				else{
					high = mid - 1;
				}
        }
		return -1;
}