class Solution {
public:
    int reverse(int x) {
        int i=0,ans=0;
        while(x!=0)
        {
            int digit=x%10;
            if(ans>INT_MAX/10||ans<INT_MIN/10)
                return 0;
            ans=digit+ans*10;
            x=x/10;
            i++;
        }
      

       return ans; 
    }
};