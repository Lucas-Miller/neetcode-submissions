class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        vector<pair<int, int>> pairs;

        for(int i = 0; i < n; ++i) {
            pairs.push_back({position[i], speed[i]});
        }

        std::sort(pairs.rbegin(), pairs.rend());


        double prevTime = (double)(target - pairs[0].first) / pairs[0].second;
        
        int fleets = 1;

        for(int i = 1; i < n; ++i) {
            double currTime = (double)(target - pairs[i].first) / pairs[i].second;

            if(currTime > prevTime) {
                prevTime = currTime;
                fleets++;
            }
        }
        return fleets;
        
    }
};
