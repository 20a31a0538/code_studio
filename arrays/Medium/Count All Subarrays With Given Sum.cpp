 map<int, int> mpp;
    mpp[0] =1;   //important
    int n= arr.size();
    int presum =0; int cnt=0;
    for(int i=0; i<n; i++){
        presum+=arr[i];
        int index = presum -k;
        cnt += mpp[index];
        mpp[presum]+=1;
    }
    return cnt;