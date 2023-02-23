class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int temp;
        for(int i=0;i<nums.size();i++){
            temp=0;
            while(nums[i]>0){
                int rem=nums[i]%10;
                nums[i]=nums[i]/10;
                temp++;
            }
            if(temp%2==0){
                count++;
            }
        }
        return count;
    }
};
