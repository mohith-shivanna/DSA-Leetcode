class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // map<int,int> np;
        // int n = nums.size();

        // for(int i=0;i<n;i++)
        // {
        //      if(np.find(nums[i])!=np.end()){
        //             return true ;
        //         }
        //         np[nums[i]]=i;

        // }
        // return false;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size()-1;i++)
        {
            if(nums[i]==nums[i-1])
                return true;
        }
        return false;
    }
};