class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int max = 0;
        if(!piles.empty()) {
            max = *std::max_element(piles.begin(), piles.end());
        }


        int l = 1;
        int r = max;
        int res = max;
        int k = 0;


        while(l <= r) {
            k = l + ((r - l) / 2);
            
            int hours = 0;
            for(int p : piles) {
                hours += (p + k - 1) / k;
            }

            if(hours <= h) {
                res = std::min(res, k);
                r = k - 1;
            } else {
                l = k + 1;
            }

        }
        


        return res;
        
    }
};
