class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
         vector<int>c(a.begin(), a.end());
         c.insert(c.end(), b.begin(), b.end());
         sort(c.begin(), c.end());
         int n = c.size();
         if(n%2 ==0){
             return ((c[n/2]+ c[n/2-1])/2.0);
         }
         else{
             return c[n/2];
         }
         
    }
};