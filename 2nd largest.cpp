
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int mx=INT_MIN;
        int smx=INT_MIN;
        for (auto i :arr)
        {
            mx = max(mx,i);
            
        }
        for (auto i:arr)
        {
            if(i>smx && i!=mx)
            {
                smx=i;
            }
        }
        return smx==INT_MIN?-1:smx;
        
    }
};