class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1)
            return cost[0];

        int ans = 0;
        sort(cost.begin(), cost.end(), greater<>());
        for(size_t i = 0; i < cost.size(); i += 2)
        {
            ans += cost[i];
            ++i;
            if(i < cost.size())
                ans += cost[i];
        }
        return ans;
    }
};