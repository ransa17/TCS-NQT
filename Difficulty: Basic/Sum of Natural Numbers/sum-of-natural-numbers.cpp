class Solution {
  public:
    int findSum(int n) {
        if(n==1)
          return 1;
        else
           return n + findSum(n-1);    }
};
