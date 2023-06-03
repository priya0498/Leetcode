class Solution {
public:
    int convertTime(string current, string correct) {
        
        vector<int> s_int(5);

        //count differ , just do it.
        for(int i{};i<5;i++){
            s_int[i] = correct[i]-current[i];
           // cout<<s_int[i];
        }

        int hour,min;
        hour = s_int[0]*10+s_int[1];
        cout<<hour<<" ";
        min  = s_int[3]*10+s_int[4];
        cout<<min;
        if(min<0) hour-=1,min+=60;
        
        return hour + min/15 + (min%15)/5 + (min%15%5);
    }
};