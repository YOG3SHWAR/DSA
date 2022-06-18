class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        int count=1;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]!=nums[i-1]) {
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
