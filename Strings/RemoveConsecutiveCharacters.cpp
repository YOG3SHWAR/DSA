string Solution::solve(string A, int B) {
    string st;
    for(int i = 0; i < A.size(); i++){
        int c = count(A.begin()+i, A.begin()+i+B, A[i]);
        if(c == B)
            i += (B-1);
        else
            st += A[i];       
    }
    return st;
}
