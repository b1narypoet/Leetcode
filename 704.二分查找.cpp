class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int high=0,low=0,mid=0,ret=-1;
        high=nums.size()-1;
        while(high>=low)
        {
            mid=low+((high-low)>>1);
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                ret=mid;
                break;
            }
        }
        return ret;
    }
};