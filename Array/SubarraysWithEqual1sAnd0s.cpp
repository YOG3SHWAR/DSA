class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
       int sum = 0;
       long long count = 0;
       unordered_map<int,int> map;
       for(int i = 0; i < n; i++) {
           if(arr[i] == 0) arr[i] = -1;
       }
       for(int i = 0; i < n; i++) {
           sum += arr[i];
           map[sum]++;
           if(sum == 0) count += map[sum];
           else count += map[sum] - 1;
       }
       return count;
    }
};
