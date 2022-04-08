class Solution {
public:
    int mySqrt(int x) {
     long  int i = 0;
        while(i*i <= x){
            i++;
        }
        return i-1;
    }
};