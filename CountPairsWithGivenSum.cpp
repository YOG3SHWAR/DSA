// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count = 0; 
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++) {
            if(map.find(k - arr[i]) != map.end())
                count += map[k - arr[i]];
            map[arr[i]]++;
        }
        return count;
    }
};
