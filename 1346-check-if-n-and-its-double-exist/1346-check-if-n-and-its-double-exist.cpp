class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i= 0 ; i < arr.size(); i++){
            int target = 2*arr[i];
            int start = 0 ;
             int end = arr.size()-1;
            while(start <= end){
                int mid = (start +end)/2 ;
                if(arr[mid] == target && mid != i)
                    return true;
                
                if(arr[mid] < target){
                    start = mid+1;
                }
                else 
                {
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};