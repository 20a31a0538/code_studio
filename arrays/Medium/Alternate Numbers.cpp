 //brute
   /* int n=a.size();
    vector<int> pos;
    vector<int> neg;
    

    for(int i=0; i<n; i++){
        if(a[i] >0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }

    for(int i=0; i<n/2; i++){
        a[2*i] = pos[i];
        a[2*i + 1] = neg[i];
    }
    return a; */

    int n=a.size();
    vector<int> ans(n,0);

    int pos=0; int neg=1;
    for(int i=0; i<n; i++) {
        if(a[i] < 0){
            ans[neg] = a[i];
            neg += 2;
        }
        else{
            
            ans[pos] = a[i];
            pos+=2;
        }
    }
    return ans;