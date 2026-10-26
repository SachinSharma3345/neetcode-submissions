class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int s = 1, e = piles[n-1];

        while(s<=e){
            int mid = s+(e-s)/2;
            long long hours = 0;
            for(int pile: piles){
                int curr_hours = ceil((double)pile/mid);
                hours = hours+ curr_hours;
            }
            if(hours<= h){
                e= mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return s;
        
    }
};
