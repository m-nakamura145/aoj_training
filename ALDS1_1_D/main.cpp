#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int r[200000];
    cin >> n;
    for(int i=0;i<n;i++) cin >> r[i];
    int max_diff = r[1] - r[0];
    int min_value = r[0];
    for(int i=1;i<n;i++){
        max_diff = max(max_diff, r[i]-min_value);
        min_value = min(min_value, r[i]);
    }
    cout << max_diff << endl;
    return 0;
}