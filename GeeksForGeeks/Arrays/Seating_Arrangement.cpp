class Solution {
public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        int n = seats.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (seats[i] == 0) {
                bool leftEmpty = (i == 0 || seats[i - 1] == 0);
                bool rightEmpty = (i == n - 1 || seats[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    seats[i] = 1;   // seat a person
                    cnt++;

                    if (cnt >= k)
                        return true;
                }
            }
        }

        return cnt >= k;
    }
};