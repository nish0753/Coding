#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        unordered_map<char, int> problem_count;
        for (char c : a) {
            problem_count[c]++;
        }

        int min_problems_needed = 0;
        string required_difficulties = "ABCDEFG";

        for (char difficulty : required_difficulties) {
            if (problem_count[difficulty] < m) {
                min_problems_needed += (m - problem_count[difficulty]);
            }
        }

        cout << min_problems_needed << endl;
    }

    return 0;
}
