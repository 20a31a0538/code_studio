#include <bits/stdc++.h>
int sumOfCap(vector<int> &wts, int cap){
    int days = 1; int load=0;
    for(int i=0; i<wts.size(); i++){
        if(load + wts[i] > cap){
            
            days++;
            load = wts[i];
        }
        else{
            load += wts[i];
        }
    }
    return days;
}



int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while(low <= high){
        int mid = (low + high)/2;
        if(sumOfCap(weights, mid) <= d)
        {
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    return low;
} 
/*int findDays(vector<int> &weights, int cap) {
    int days = 1; //First day.
    int load = 0;
    int n = weights.size(); //size of array.
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > cap) {
            days += 1; //move to next day
            load = weights[i]; //load the weight.
        }
        else {
            //load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}