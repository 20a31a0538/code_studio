#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here. 
    int n= arr.size();
	int low = 0;
	int high = n-1;
    int index = -1;
	int ans= INT_MAX;
	while(low <= high){
		int mid = (low + high )/2;
		//left sorted
		if(arr[low] <= arr[mid]){
            index = low;
			ans = min(ans, arr[low]);
			low = mid +1;
            
		}
		//right sorted
		else{
            index =mid;
			
			ans = min(ans, arr[mid]);
            high =mid - 1;
		}
	}
	return index;   
}