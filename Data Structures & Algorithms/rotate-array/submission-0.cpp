class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        int count = 0;

        for(int st =0; count < n; st++){
            int current = st;
            int prev = nums[st];
            do{
                int nextidx = (current + k) % n;
                int temp = nums[nextidx];
                nums[nextidx] = prev;
                prev = temp;
                current = nextidx;
                count++;
            } while(st  != current);
        }
    }
};