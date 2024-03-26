#include <iostream>
using namespace std;
//start with 'gaa' 
int main() {
    int n;
    string res;
    cin >> n;
    int l = 3;
    int i = 3;
    while (l < n) {
        l = 2 * l + i + 1;
        i++;
    }
   //cout << "start" << l << " " << i << endl;

    while (1) {
        if (n <= 3) {
            res = (n == 1) ? "g" : "a";
            break;
        } else if (l + 1 <= n && n <= l + i + 1) {
            if (n == l + 1) {
                //cout << n << l << i;
                res = 'g';
                break;
            } else {
                //cout << n << l << i;
                res = 'a';
                break;
            }
        } else if (n > l + i + 1) {
                n -= l + i + 1;
        }
        l = (l - i) / 2;
        i--;
    }

    cout << res;
}