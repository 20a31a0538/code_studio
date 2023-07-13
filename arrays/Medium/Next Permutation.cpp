// Write your code here.
//better
    /*next_permutation(A.begin(), A.end());
    return A; */

//optimal

    int index = -1;
    int n = A.size();
    for(int i=n-2; i>=0;i--){                //find break point
        if(A[i] < A[i+1]){
            index = i;
            break;
        }
    }
    //base case at break point ---> no break point ---> reverse it
    if(index == -1){
        reverse(A.begin(), A.end());
        return A;
    }

    //find num greater than(closest) breakpoint but small among them
    for(int i = n-1; i>index; i--){
        if(A[i] > A[index]){
            swap(A[i], A[index]);
        break;
        }
        
    }
    //try to keep as small as possible
    reverse(A.begin() + index +1, A.end());
    return A; 











/*
    int n = A.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());

    return A; */