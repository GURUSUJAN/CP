class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        /*int n=numbers.size();
        int i,j,a,b;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(numbers[i]+numbers[j]==target && (i!=j)) 
                {
                    a=i+1;
                    b=j+1;
                    break;
                }
            }
        }
        return {a,b};*/
        vector<int>ans;
        int n=numbers.size(),low=0,high=n-1;
        while(low<high)
        {
           int sum=numbers[low]+numbers[high];
           if(sum==target)
           {
               ans.push_back(low+1);
               ans.push_back(high+1);
               break;
           }
           else if(sum>target)
           high--;
           else
           low++;
        }
        return ans;
    }
};
