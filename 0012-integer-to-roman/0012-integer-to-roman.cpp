class Solution {
public:
    string intToRoman(int nums) {
        string result="";
        int arr1[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string arr2[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        while(nums>0){
        for(int i=0;i<13;i++)
        {
            if(nums>=arr1[i])
            {
                nums=nums-arr1[i];
                result = result + arr2[i];
                break;
            }

        }
        }
        return result;
    }
};