#include <bits/stdc++.h>
int sumOfDivisor(vector<int> arr, int d){
	int sum =0;
	for(int i=0; i<arr.size(); i++){
		sum+= ceil((double)arr[i] / (double)d);
	}
	return sum;
}



int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int low = 1; int high = *max_element(arr.begin(), arr.end());
	
	while(low <= high){
		int mid = (low + high)/2;
		if(sumOfDivisor(arr,mid) <= limit){
			high = mid -1;
			}
			else{
				low = mid + 1;
	        }
		}
	return low;

}