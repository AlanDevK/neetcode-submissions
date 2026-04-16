class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numbers;
        for (int i: nums)
        {
            numbers.insert(i);
        }
        if (numbers.size()!=nums.size()){
            return true;
        } return false;
    }
};