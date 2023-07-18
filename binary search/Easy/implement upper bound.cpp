int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int upper = n;
	int low =0;
	int high = n-1;
	while(low <= high){
		int mid = (low + high)/2;
		//maybe lower bound or may not be lower bound
		if(arr[mid] > x){
			upper = mid;
			high = mid -1;
		}
		else{
			low = mid +1; ///look for right
		}
	}
	return upper; 	
}