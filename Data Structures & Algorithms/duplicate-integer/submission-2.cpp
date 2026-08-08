class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int p : nums){
            if(st.count(p)){
                return true;
            }
            st.insert(p);
        }
        return false;
    }
};