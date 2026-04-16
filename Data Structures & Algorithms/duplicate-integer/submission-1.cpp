class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numbers;
        for (int i: nums)
        {
            numbers.insert(i);
        }
        for (int i:numbers){
            if (count(nums.begin(), nums.end(), i)>1){
                return true;
            }
        }
        return false;
    }
};