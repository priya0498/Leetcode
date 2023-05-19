class Solution {
public:
    int tribonacci(int n) {
            if(n == 0)
                    return 0;
            if(n == 1 || n == 2)
                    return 1;
        
            long long t0 = 0;
            long long t1 = 1;
            long long t2 = 1;
            long long ans = 0 ;
            
            for(int i = 3 ; i <=  n ; i++){
                    ans = t0 + t1 + t2;
                    t0 = t1;
                    t1 = t2;
                    t2 = ans ;
            }
            return ans;
    }
};