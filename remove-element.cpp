class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int originalLength = nums.size();
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        int nonValCount = nums.size();
        nums.insert(nums.end(), originalLength - nonValCount, 0);
        return nonValCount;
    }
};