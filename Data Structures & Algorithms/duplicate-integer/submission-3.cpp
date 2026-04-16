class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numbers (nums.begin(), nums.end());
        if (numbers.size()!=nums.size()){
            return true;
        } return false;
    }
};