// Write your code here.
  /*  sort(a.begin(),a.end());
    int n=a.size();
    int cnt =1; int lastsmaller = INT_MIN; int longest =1;
    for(int i=0; i<n; i++){
        if(a[i] -1 == lastsmaller){
            cnt++;
            lastsmaller=a[i];
        }
        else if(a[i] != lastsmaller){
            cnt=1;
            lastsmaller =a[i];
        }
        longest = max(longest, cnt);
    }
    
    return longest;*/

    //optimal

    //put elements into set

    int cnt=0;
    int longest =0;
    int x;
    int n=a.size();
    unordered_set<int> st;
    for(int i=0; i<n;i++){
        st.insert(a[i]);
    }

    //iterate ech element
    for(auto it:st){
        if(st.find(it -1) == st.end()){  //find initial element
            cnt=1;
            x=it;
            while(st.find(x+1) != st.end()){ //check consecutive elements from start
                x=x+1;
                cnt++;
            }
        }
        longest = max(longest,cnt);
    }
    return longest;
