class Solution {
    public:
        int pos = 0;
        void moveZeroes(vector<int>& nums) {
            int zeroCnt = 0;
            int pos = 0;
            for (int i = 0; i < (int)nums.size(); i++) {
                if (nums[i]) nums[pos++] = nums[i];
                else zeroCnt++;
            }
            for (int i = (int)nums.size() - zeroCnt ; i < (int)nums.size(); i++) {
                nums[i] = 0;
            }
        }
};