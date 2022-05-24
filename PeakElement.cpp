// https://practice.geeksforgeeks.org/problems/peak-element/1

class Solution {
    public:
    int peakElement(int arr[], int n) {
       // Your code here
       int index = 0;
        if (n == 1)
            return index;
        if (arr[n-1] > arr[n-2])
            return n-1;
        for (int i = 1; i < n-1; i++) {
            if (arr[i] > arr[i+1] && arr[i] > arr[i-1])
                index = i;
        }
        return index;
    }
};
