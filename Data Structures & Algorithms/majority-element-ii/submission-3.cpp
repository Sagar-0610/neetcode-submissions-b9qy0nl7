class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            } else{
                m[nums[i]] = 1;
            }
        }
        for(pair<int,int>p : m){
            if(p.second > (int)nums.size()/3){
                result.push_back(p.first);
            }
        }
        return result;
        
    }
};