class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        int maxDia=INT_MIN;
        int area=INT_MIN;
        for(int i=0;i<dimensions.size();i++)
        {
            int start=dimensions[i][0];
            int end=dimensions[i][1];

            int dia=start*start+end*end;
            int ar=start*end;
              if(dia>maxDia)
              {
                maxDia=dia;
                area=ar;
              }
              else if(dia==maxDia)
                area=max(area,ar);
        }
  
      return area;      
    }
};