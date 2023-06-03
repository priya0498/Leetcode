class Solution {
public:
    int convertTime(string current, string correct) {
        
        int currentHours = 0;
        int currentMinute = 0;
        int correctHours = 0;
        int correctMinute = 0;   
        
        int i = 0;
        
        while(current[i] != ':') {
            currentHours = currentHours * 10 + (current[i] - '0');
            ++i;
        }     
        ++i;
        while(i < current.size()) {
            currentMinute = currentMinute * 10 + (current[i] - '0');
            ++i;
        }
        
        int j = 0;
        while(correct[j] != ':') {
            correctHours = correctHours * 10 + (correct[j] - '0');
            ++j;
        }
        ++j;
        while(j < correct.size()) {
            correctMinute = correctMinute * 10 + (correct[j] - '0');
            ++j;
        }
        
        currentMinute += currentHours * 60;
        correctMinute += correctHours * 60;
        vector<int> minutes = {60, 15, 5, 1};
        
        int count = 0;
        
        for(int i = 0; i < 4; ++i) {
            
              int minute = minutes[i];
            while(currentMinute < correctMinute) {
                currentMinute += minute;
                count++;
            }

            if(currentMinute == correctMinute) {
                return count;
            }

            currentMinute -= minute;
            count--;
        }
        
        return 0;
    }
};