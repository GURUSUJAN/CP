import java.util.*;
public class Solution
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int x,y;
        x=sc.nextInt();
        String []sl=new String[x];
        for(int i=0;i<x;i++)
        {
            sl[i]=sc.next();
        }
        y=sc.nextInt();
        String []q=new String[y];
        //int []qc=new int[x];
        int count=0;
        for(int i=0;i<y;i++)
        {
            q[i]=sc.next();
        }
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(sl[j].compareTo(q[i])==0)
                {count++;}
            }
            System.out.println(count);
            count=0;
        }
    }
}
