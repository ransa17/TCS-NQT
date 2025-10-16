class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        bool flag = true;
        int small= 0, large= n-1;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n;i++){
            if(flag)
                temp[i]= arr[large--];
            else
                temp[i]= arr[small++];
                
            flag = !flag;
        }
        for(int i=0; i<n;i++){
            arr[i]= temp[i];
        }
        
    }
};