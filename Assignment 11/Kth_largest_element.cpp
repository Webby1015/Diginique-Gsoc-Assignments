class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        qSort(nums, 0, nums.size() - 1);
        return nums[nums.size() - k];
    }
    void qSort(vector<int>& nums, int l, int r) {
        if (l >= r) {
            return;
        }
        int p = l;
        swap(nums[(l + r) / 2], nums[r]);
        for (int i = l; i < r; i++) {
            if (nums[i] < nums[r]) {
                swap(nums[i], nums[p++]);
            }
        }
        swap(nums[p], nums[r]);
        qSort(nums, l, p - 1);
        qSort(nums, p + 1, r);
    }
};
