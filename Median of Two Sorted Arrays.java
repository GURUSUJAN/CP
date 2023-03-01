class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2)
    {
        // int n=nums1.length;
        // int m=nums2.length;
        // int []nums3=new int[n+m];
        // for(int i=0;i<n;i++)
        // {
        //     nums3[i]=nums1[i];
        // }
        // for(int i=0;i<m;i++)
        // {
        //     nums3[i+n]=nums1[i];
        // }   
        // Arrays.sort(nums3);
        // int mid=(nums3.length)/2;
        // if(nums3.length%2!=0)
        // return (double)nums3[mid];
        // int g=nums3[nums3.length/2]+nums3[(nums3.length/2)-1];
        // double x=(double)g/2;
        // return x;
        int len=nums1.length+nums2.length;
        int[] ans=new int[len];
        int j=0;
        for(int i=0;i<nums1.length;i++)
        {
            ans[j]=nums1[i];
            j++;
        }
        for(int i=0;i<nums2.length;i++)
        {
            ans[j]=nums2[i];
            j++;
        }
        Arrays.sort(ans);
        int mid=(ans.length)/2;
        if(ans.length%2!=0)return (double)ans[mid];
        int g=ans[ans.length/2]+ans[(ans.length/2)-1];
        double x=(double)g/2;
        return x;
    }
}
