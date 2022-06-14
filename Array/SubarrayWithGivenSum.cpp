// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

public:
    vector<int> subarraySum(int arr[], int n, long long s) {
        long long sum = 0;
        int i = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j];
            if (sum > s)
                while (sum > s)
                    sum -= arr[i++];
            if(sum == s)
                return {i+1, j+1};
        }
        return {-1};
   }
