class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int length = arr.size();
        int i=0, cnt=0, flag=0;
        for(int i=0;i<length-1;i++){
            if(arr[i] == 0){
                flag=1;
                arr.insert(arr.begin()+i, 0);
                i+=1;
                cnt+=1;
            }
        }
        
        while(cnt>0 && flag==1){
            arr.pop_back();
            cnt--;
        }
    }
};

