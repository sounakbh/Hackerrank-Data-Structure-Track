#include <bits/stdc++.h>
using namespace std;

int main() {
    long a[400009];
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>v;
    for(int i = 0; i < m; i++){
        int a, b, k;
        cin >> a >> b >> k;
        v.push_back(make_pair(a, k));
        v.push_back(make_pair(b+1, -1 * k));
    }
    long maximum = 0, sum = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < m*2; i++){
        sum += v[i].second;
        maximum = max(maximum, sum);
    }
        
    cout << maximum << endl;
    return 0;
}
