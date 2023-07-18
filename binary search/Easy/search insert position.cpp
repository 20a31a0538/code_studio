int searchInsert(vector<int>& arr, int x)
{
	// Write your code here.
	int n=arr.size();
	int lower = n;
	int low =0;
	int high = n-1;
	while(low <= high){
		int mid = (low + high)/2;
		//maybe lower bound or may not be lower bound
		if(arr[mid] >= x){
			lower = mid;
			high = mid -1;
		}
		else{
			low = mid +1; ///look for right
		}
	}
	return lower;
}