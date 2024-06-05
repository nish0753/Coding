#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to compute GCD of two numbers
int gcd(int x, int y) {
    while (y) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// Function to check if the GCD sequence is non-decreasing
bool is_non_decreasing(vector<int>& a) {
    for (size_t i = 0; i < a.size() - 1; ++i) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (n == 3) {
            cout << "YES" << endl;
            continue;
        }
        
        // Compute GCD sequence for original array
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            b[i] = gcd(a[i], a[i + 1]);
        }
        
        // Check if the GCD sequence b is already non-decreasing
        if (is_non_decreasing(b)) {
            cout << "YES" << endl;
            continue;
        }
        
        // Check each possible element removal
        bool possible = false;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    temp.push_back(a[j]);
                }
            }
            
            vector<int> new_b(temp.size() - 1);
            for (int j = 0; j < temp.size() - 1; ++j) {
                new_b[j] = gcd(temp[j], temp[j + 1]);
            }
            
            if (is_non_decreasing(new_b)) {
                possible = true;
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
