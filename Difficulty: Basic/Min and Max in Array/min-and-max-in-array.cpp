class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max = arr[0];
        int min = arr[0];
        
        for(int i = 0; i<n; i++){
            if (max<arr[i]){
                max = arr[i];
                
            }
            if (min> arr[i]){
                min = arr[i];
            }
        }
       return {min, max};
        }
    
};
