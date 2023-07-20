#include <bits/stdc++.h>

int maxi(vector<int> &v){
    int maximum = INT_MIN;
    for(int i = 0; i<v.size(); i++ ){
        maximum = max(v[i], maximum);
    }
    return maximum;

}
int hours(vector<int> &arr, int hrs){
    int totalhrs = 0;
    for(int i =0; i<arr.size(); i++){
        totalhrs += ceil((double)arr[i] / (double)hrs);

    }
    return totalhrs;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int ans = maxi(v);
    int low = 1;
    int high = maxi(v);
    while(low <= high){
        int mid = (low +high)/2;
        int totalHours = hours(v, mid);
        if(totalHours <= h){
            ans = mid;
            high = mid - 1;

        }
        else{
            low = mid +1;
        }
    }
    return ans;
}