#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> ans;

    for (int i = 1; i <= 9; i++) {
        ans[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                ans[j]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << ans[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
