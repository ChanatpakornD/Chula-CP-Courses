#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    double w;
    int n;
    double vo = 0;
    cin >> w >> n;
    vector<double> value(n);
    vector<double> weight(n);
    vector<pair<double, int>> valuable(n);
    for(int i=0 ; i < n ; ++i) cin >> value[i];
    for(int i=0 ; i < n ; ++i) cin >> weight[i];
    // v / w which is greatest use first from greedy
    for(int i=0 ; i < n ; ++i) valuable[i] = {(value[i]/weight[i]),i};
    sort(valuable.begin(), valuable.end(), greater());
    for (int i =0 ;i < n ; ++i) {
        if(w - valuable[i].second < 0) break;
        int idx = valuable[i].second;
        int count = w / weight[idx];
        w -= weight[idx] * count;
        vo += value[idx] * count;
    }
    printf("%.4f", vo);
    
    return 0;
}
