#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &v, int l, int r) {
    if (l == r-4) {
        if (v[l] == 1 && v[l+1] == 0 && v[r-2] == 0 && v[r-1] == 1
        || v[l] == 0 && v[l+1] == 1 && v[l+2] == 0 && v[l+3] == 1) return true;
        return false;
    } else {
        int m = (l+r) / 2;
        return check(v, l, m) && check(v, m, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    int mem = (1 << k);
    //cout << mem;
    while (n--) {
        vector<int> v(mem);
        for (int i = 0; i < mem; i++) {
            cin >> v[i];    
            //for (auto &i : v) cout << i << " ";
        }
        if (v[mem-1] == 0 || v[mem-2] == 1) {
            cout << "no\n";
        } else if (mem == 2){
            cout << "yes\n";
        } else {
            string result = check(v, 0, mem) ? "yes\n" : "no\n";
            cout << result;
        }
    }
}