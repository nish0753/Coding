#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1];  // Remember the value of the favorite cube
        sort(a.rbegin(), a.rend());     // Sort in non-increasing order

        int count_above = 0;
        int count_equal = 0;

        // Count how many cubes have a value greater than or equal to the favorite cube
        for (int i = 0; i < n; ++i) {
            if (a[i] > favorite_value) {
                count_above++;
            } else if (a[i] == favorite_value) {
                count_equal++;
            }
        }

        if (count_above >= k) {
            cout << "NO" << endl;  // Favorite cube is definitely not removed
        } else if (count_above + count_equal <= k) {
            cout << "YES" << endl;  // Favorite cube is definitely removed
        } else {
            cout << "MAYBE" << endl;  // It depends on the order of cubes with equal values
        }
    }

    return 0;
}
