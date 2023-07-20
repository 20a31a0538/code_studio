int floorSqrt(int n)
{
    // Write your code here.
    int low =1;
    long long high = n;
    long long ans = 1;
    while(low <= high){
        long long mid = (low + high)/2;
        if(mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;          // ans or high
}
