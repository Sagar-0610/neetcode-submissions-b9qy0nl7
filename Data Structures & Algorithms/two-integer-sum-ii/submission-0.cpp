class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        int l = 0, r= number.size()-1;
        while(l < r){
            int currSum = number[l]+number[r];

            if(currSum > target){
                r--;
            }else if(currSum < target){
                l++;
            }else{
                return {l+1,r+1};
            }
        }
        return{};
    }
};
