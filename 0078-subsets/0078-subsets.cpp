class Solution {
public:

    void solve(vector<int> nums,vector<int> out,int i,vector<vector<int>> &ans)
    {
        if(i>=nums.size()) 
        {
            ans.push_back(out);
            return;
        }
        solve(nums,out,i+1,ans);
        int element=nums[i];
        out.push_back(element);
        solve(nums,out,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        int i=0;
        solve(nums,out,i,ans);
        return ans;
        
    }
};