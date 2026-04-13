class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        if(arr.size() == 1){
            return arr[0];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<min(arr[0].length(),arr.back().length());i++){
            if(arr[0][i] != arr.back()[i]){
                return arr[0].substr(0,i);
            }
        }
        return arr[0];
    }
};