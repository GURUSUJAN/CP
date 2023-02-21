#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n=nums.size();
        int i;
        int ar[n];
        for(i=0;i<n;i++)
        {
            ar[i]=(nums[i]*nums[i]);
        }    
        for(i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ar[i]>ar[j])
                {
                    int temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            nums[i]=ar[i];
        }
        return nums; 
    }
};
