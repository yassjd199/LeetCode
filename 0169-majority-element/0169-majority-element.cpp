class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            int cnt = 0, curElement = 0;
            for (int i = 0; i < n; i++) {
                if (!cnt) {
                    curElement = nums[i];
                    cnt++;
                    continue ;
                }
                if (nums[i] != curElement) cnt--;
                else cnt++;
            }
            return curElement ;

        }
};