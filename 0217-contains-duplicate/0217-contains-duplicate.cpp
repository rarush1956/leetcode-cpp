class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int j = 0; j < nums.size(); j++) {
            freq[nums[j]]++;
            if(freq[nums[j]]>1){
                return true;
            }
        }
        
        return false;
    }
};