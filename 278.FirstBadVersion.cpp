class Solution {
public:
    int firstBadVersion(int n) {

       long int first = 1, last = n, mid = (first + last)/2;
        
        while(1) {
            if (  (isBadVersion(mid)) && ((!isBadVersion(mid - 1)) || (mid == 1))  ) {
                return mid;
            }   else if(!isBadVersion(mid)) {
                    first = mid + 1;
                    mid = (first + last)/ 2;
            }   else {
                    last = mid - 1;
                    mid = (first + last)/2;
            }
        } 
        return {};
    }
};
