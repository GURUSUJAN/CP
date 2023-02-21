class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int timesToRotate = k % nums.size();

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + timesToRotate);
        reverse(nums.begin() + timesToRotate, nums.end());

    }
};
