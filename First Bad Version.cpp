// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        /*int m=n;
        while((isBadVersion(m)))
        {
            m--;
            firstBadVersion(m);
        }
        return m+1; */ 
    
        unsigned int st=1;
        unsigned int et=n;
        unsigned int mid=((st+et)/2);
        while(st<=et)
        {
            mid=(st+et)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
                return mid;
            if(isBadVersion(mid)==true)
                et=mid-1;
            else
                st=mid+1;
        }
        return mid;
    }
};
