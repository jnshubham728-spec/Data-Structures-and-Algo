class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) {
            return false;
        }
        int c =0;
        for(int i=10;i>0;i-- ) {
            
           
            if(n>=i) {
             n = n-i;  
               c++;
            }
            else {
                break;
            }
        }
        if(c%2==0) {
            return false;
        }
        return true;
    }
};