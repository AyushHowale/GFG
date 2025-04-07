
class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int mnp=INT_MAX;
          int mxp=0;
          for(auto p:prices)
          {
              if(p<mnp)
              {
                 mnp=p;
              }
              int pr=p-mnp;
              mxp=max(pr,mxp);
          }
          return mxp;
      }
  };
  