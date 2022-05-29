string Solution::solve(string A) {
    string ans = "";
    string word = "";
    int i = 0;
    int n =  A.length() - 1;
    while(A[i] == ' ') i++;
    while(A[n] == ' ') n--;
    for(; i <= n; i++) {
        if(A[i] == ' ') {
            ans = word + " " + ans;
            word = "";
        }
        word += A[i];
    }
    return word + ' ' + ans1;
}
