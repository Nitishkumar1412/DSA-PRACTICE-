class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();

        for (int step = 0; step < n; step++) {
            int right = (startIndex + step) % n;
            if (words[right] == target) return step;

            int left = (startIndex - step + n) % n;
            if (words[left] == target) return step;
        }

        return -1;
    }
};