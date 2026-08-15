class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int,int>> pairs;
        for(int i = 0 ; i < n; ++i) {
            pairs.push_back({position[i], speed[i]});
        }

        std::sort(pairs.rbegin(), pairs.rend());

        int fleets = 1;

        // time it will take for the first element of pairs to get to target
        // we will change prevTime every time we find another slower moving car
        // aka we find a "fleet"
        double prevTime = (double)(target - pairs[0].first) / pairs[0].second;
        
        // starting on the second car so we can compare back to the previous
        for(int i = 1; i < n; ++i) {
            double currTime = (double)(target - pairs[i].first) / pairs[i].second;
            
            // if the time it will take for the current car to arrive at target is greater then
            // the time it would take for the previous car, this means we found a fleet.
            // Even though previous car would get there faster, it can't pass this slower car
            // in front of it so we need to slow down and match its speed aka make a fleet
            if (currTime > prevTime) {
                fleets++;
                prevTime = currTime;
            }
        }
        return fleets;
    }
};
