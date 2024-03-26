#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> stop(n);
    vector<pair<int,int>> jobs;
    vector<pair<int,int>> res;
    for(int i=0 ; i < n;++i) cin >> start[i];
    for(int i=0 ; i < n;++i) cin >> stop[i];
    for(int i=0 ; i < n; ++i) jobs.push_back({stop[i], start[i]});
    sort(jobs.begin(), jobs.end());
    for(int i=0 ; i < n; ++i) {
        start[i] = jobs[i].second;
        stop[i] = jobs[i].first;
    } 
    int last = -1;
    for(int i=0 ; i < n ; ++i){
        if(start[i] < last) continue;
        res.push_back({start[i], stop[i]});
        last = stop[i];
    }

    cout << res.size()<< endl;
    return 0;
}