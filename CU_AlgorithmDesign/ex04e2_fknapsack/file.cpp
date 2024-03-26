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
    sort(valuable.begin(), valuable.end(),greater());
    for (int i =0 ;i < n ; ++i) {
        if(w - weight[valuable[i].second] < 0) {
            vo += valuable[i].first * w;
            break;
        } else {
            w -= weight[valuable[i].second];
            vo += value[valuable[i].second];
        }
    }
    printf("%.4f", vo);
    
    return 0;
}
