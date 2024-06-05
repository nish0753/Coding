#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        int m;
        cin >> m;
        unordered_map<int, int> d_count;
        for (int i = 0; i < m; ++i) {
            int d;
            cin >> d;
            d_count[d]++;
        }
        
        unordered_map<int, int> required_modifications;
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                required_modifications[b[i]]++;
            }
        }
        
        for (const auto& pair : required_modifications) {
            if (d_count[pair.first] < pair.second) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
