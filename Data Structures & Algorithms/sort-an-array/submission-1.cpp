class Solution {
private:
    void countingSort(vector<int>& nums) {
        unordered_map<int,int>count;
        int minVal = *min_element(nums.begin(),nums.end());
        int maxVal = *max_element(nums.begin(),nums.end());
        
        for(auto & val:nums){
            count[val]++;
        }
        int idx = 0;
        for(int val = minVal;val <= maxVal;++val){
            while(count[val] > 0){
                nums[idx] = val;
                idx += 1;
                count[val] -= 1;
            }
        }
    }
    public:
        vector<int> sortArray(vector<int>& nums){
            countingSort(nums);
            return nums;
        }
};