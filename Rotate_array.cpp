
class Solution {
    public:
  
      // Function to rotate an array by d elements in counter-clockwise direction.
     void reverse(vector<int>&arr,int st,int en)
     {
         while(st<en)
         {
             swap(arr[st],arr[en]);
             st++;
             en--;
         }
     }
      void rotateArr(vector<int>& arr, int d) {
          // code here
          int n=arr.size();
          d=d%n;
          reverse(arr,0,d-1);
          reverse(arr,d,n-1);
          reverse(arr,0,n-1);
      }
  };