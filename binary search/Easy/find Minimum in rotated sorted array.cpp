#include <bits/stdc++.h>

int findMin(vector<int>& arr)
{
	// Write your code here.
	int n= arr.size();
	int index = -1;
	int low = 0;
	int high = n-1;
	int ans= INT_MAX;
	while(low <= high){
		int mid = (low + high )/2;
		//left sorted
		if(arr[low] <= arr[mid]){
			if(arr[low] < ans){
				index = low;
				ans = arr[low];
			}
			
			low = mid +1;
		}
		//right sorted
		else{
			high =mid - 1;
			if(arr[mid] < ans){
				index = low;
				ans = arr[mid];
			}
			
		}
	}
	return ans;
}