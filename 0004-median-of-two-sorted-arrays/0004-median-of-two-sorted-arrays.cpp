class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<double> merg;
            int i = 0, j = 0;
            while (i < nums1.size() && j < nums2.size()) {
                if (nums1[i] > nums2[j]) {
                    merg.emplace_back(nums2[j]);
                    j++;
                } else {
                    merg.emplace_back(nums1[i]);
                    i++;
                }
            }
            while (i < nums1.size()) merg.emplace_back(nums1[i++]);
            while (j < nums2.size()) merg.emplace_back(nums2[j++]);
            return (((nums1.size() + nums2.size()) & 1) == 0) ? (merg[(nums1.size() + nums2.size()) / 2 - 1] + merg[(nums1.size() + nums2.size()) / 2]) / 2 : merg[(nums1.size() + nums2.size()) / 2] ;

        }
};