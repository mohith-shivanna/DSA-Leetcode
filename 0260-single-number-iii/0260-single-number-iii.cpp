class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xo=0;
        for(int i=0;i<nums.size();i++)
                    xo=xo^nums[i] ;
         long diff=xo & - xo;

         int a=0,b=0;
          for(int i=0;i<nums.size();i++)
          {
            if(nums[i]&diff)
                    a=a^nums[i] ;
             else       
                    b=b^nums[i] ;
          }           
        return {a,b};
    }
};