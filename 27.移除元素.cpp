class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos1=0,pos2=0;
        int size=nums.size();
        int k=0;
        while(pos2<size)
        {
            if(nums[pos2]!=val)
            {
                nums[pos1]=nums[pos2];
                pos1++;
                pos2++;
            }
            else
            {
                k++;
                pos2++;
            }
        }
        return size-k;
    }
};