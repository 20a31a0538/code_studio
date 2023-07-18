#include <bits/stdc++.h> 

//lower bound
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
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

int upperBound(vector<int> &arr, int n, int x){
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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb = lowerBound( arr,  n, k);
    if((lb == n) || arr[lb] != k) return {-1, -1};

    return {lb, upperBound(arr, n, k)-1};
    
}