#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int extreme_round(int n) {
    int k = 0;
    int j = n;
    for (int i = 0; i < n; i++) {
        if (j < 10)
            break;
        ++k;
        j /= 10;
    }
    if (n < 1)
        return -1;
    else if (n < 10)
        return n;
    else
        return n / pow(10, k) + extreme_round(pow(10, k) - 1);
}

int main() {
    int t; // Number of test cases
    cin >> t;

    vector<int> results; // To store results for all test cases

    while (t--) {
        int n;
        cin >> n;
        results.push_back(extreme_round(n)); // Compute and store the result
    }

    // Output all results
    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}
