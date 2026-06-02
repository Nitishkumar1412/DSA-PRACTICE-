class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int ans = INT_MAX;

        // land -> water
        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {

                int finishLand = landStartTime[i] + landDuration[i];

                int startWater = max(finishLand, waterStartTime[j]);

                ans = min(ans, startWater + waterDuration[j]);
            }
        }

        // water -> land
        for (int i = 0; i < waterStartTime.size(); i++) {
            for (int j = 0; j < landStartTime.size(); j++) {

                int finishWater = waterStartTime[i] + waterDuration[i];

                int startLand = max(finishWater, landStartTime[j]);

                ans = min(ans, startLand + landDuration[j]);
            }
        }

        return ans;
    }
};