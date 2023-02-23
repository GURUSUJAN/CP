class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start=0;
        int end=nums.size()-1;
        int tar=target;
        while(start<=end)
        {
            int mid=((start+end)/2);
            if(nums[mid]==tar)
            {
                return mid;
                exit(0);
            }
            else if(nums[mid]<tar)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};
