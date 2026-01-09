#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution sol;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << sol.sum(a, b) << endl;

    return 0;
}
