// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

pair<long long, long long> getMinMax(long long arr[], int n) {
    
    long long min = arr[0];
    long long max = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    pair<long long, long long> ans;
    ans.first = min;
    ans.second = max;
    
    return ans;
    
}
