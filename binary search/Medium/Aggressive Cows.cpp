#include <bits/stdc++.h>
bool possible(vector<int> arr, int dist, int cows){
    int cntCows =1; int lastCow = arr[0];
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i] - lastCow >= dist){
            cntCows++;
            lastCow = arr[i];
        }
        
        if(cntCows >= cows) return true;
        
    }
    return false;
}




int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low =0; int high = stalls[n-1] - stalls[0] ; //high = max = min
    int ans =-1;
    while(low <= high){
        int mid =(low + high)/2;

        if(possible(stalls, mid, k) == true){
            ans = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}