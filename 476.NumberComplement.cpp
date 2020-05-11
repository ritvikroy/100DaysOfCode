class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;    
        vector <int> vect;
        while(num) {
            int ori = num % 2;
            int comp = (ori == 1)?0:1;
            vect.push_back(comp);
            num /= 2;
        }     
        int sum = 0;
        for (int i = 0; i < vect.size(); i++) {
            sum += vect.at(i)*pow(2, i); 
        }     
        return sum;
    }
};
