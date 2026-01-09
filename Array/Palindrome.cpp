#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long rev = 0;
        int num = x;

        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev == x;
    }
};

int main() {
    Solution sol;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (sol.isPalindrome(x)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
