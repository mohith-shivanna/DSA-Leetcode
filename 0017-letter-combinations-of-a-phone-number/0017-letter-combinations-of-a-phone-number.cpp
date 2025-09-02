class Solution {
public:

    void solve(string digit,string output,int index,vector<string> &ans,string mapp[])
    {
        if(index>=digit.size())
        {
            ans.push_back(output);
            return;
        }
        int num=digit[index]-'0';
        string value=mapp[num];

        for(int i=0;i<value.size();i++)
        {
            output.push_back(value[i]);
            solve(digit,output,index+1,ans,mapp);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};


        vector<string> ans;
        int index=0;
        string output;
        string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapp);
       return ans; 
    }
};