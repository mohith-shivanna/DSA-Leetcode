class Solution {
public:
    int countPrimes(int n) {
            if(n<2)return 0;

        vector<bool> Prime(n,true);
        Prime[0]=Prime[1]=false;

        int count=n-2;

        for(int i=2;i*i<n;i++)
        {   
            if(Prime[i]==true)
            {
                for(int j=i*i;j<n;j=j+i)
                {
                    if(Prime[j]==true)
                    {
                        Prime[j]=false;
                        count--;
                    }
                }
            }    
        }
     return count;   
    }
};