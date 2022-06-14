// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1#

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos, neg;
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0)
                pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        int temp = 0;
        for (int i = 0; i < pos.size(); i++) {
            arr[i] = pos[i];
            temp++;
        }
        for (int i = 0; i < neg.size(); i++) {
            arr[temp + i] = neg[i];
        }
    }
};
