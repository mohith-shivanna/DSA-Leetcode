class Solution {
public:
     int leftMost(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int left=-1;

      int mid=s+(e-s)/2;

      while(s<=e)
      {
        if(nums[mid]==target){
                left=mid;
                e=mid-1;
        }
        else if(nums[mid]<target)
               s=mid+1;
        else
                e=mid-1;

        mid=s+(e-s)/2;

      }   
      return left;     
    }
     int rightMost(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int right=-1;

      int mid=s+(e-s)/2;

      while(s<=e)
      {
        if(nums[mid]==target){
                right=mid;
                s=mid+1;
        }

        else if(nums[mid]<target)
               s=mid+1;
        else
                e=mid-1;

        mid=s+(e-s)/2;

      }   
      return right;     
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int left=leftMost(nums,target);
        int right=rightMost(nums,target);

        return {left,right};
    }
};