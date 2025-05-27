class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num2 = (floor(n/m)*(floor(n/m)+1))*m;
        int sum = ((n*(n+1))/2)-num2;
        return sum;
    }
};