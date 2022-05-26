// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++)
            map[arr[i]]++;
        for(int i = 0; i < n; i++)
            if(map[i] > 1)
                ans.push_back(i);
        if(ans.size() == 0)
            ans.push_back(-1);
        return ans;
    }
};
