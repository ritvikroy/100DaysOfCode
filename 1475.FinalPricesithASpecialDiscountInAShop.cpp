class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
         for(int i=0;i<arr.size()-1;i++){
           int item=arr[i];
           int dis=0;
           int j=i+1;
           while(j<arr.size()){
               if(arr[j]<=arr[i]){
                   break;
               }
               j++;
           }
           if(j<arr.size()){
               dis=arr[j];
           }
           
           arr[i]=item-dis;
       }
        return arr;
    }
};
