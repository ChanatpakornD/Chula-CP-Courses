// #include <iostream>
// #include <string>
// #include <map>

// using namespace std;

// //ab, ba
// //aaba , abaa

// bool solve(string &a, string &b, int m) {
//   //kuy
//   if (m == 0) return true;
//   map<char,int> tmp1, tmp2, tmp3;
//   for (int i=0; i < m; ++i) {
//     tmp1[a[i]]++;
//     tmp2[b[b.size() - i - 1]]++;
//     tmp3[b[i]]++;
//   }
//   return  ((tmp1 == tmp2) || (tmp1 == tmp3)) && solve(a,b, m/2);
// }

// int main() {
//     string a, b;
//     string result;
//     cin >> a >> b;
//     result = (a == b || solve(a,b,a.size())) ? "YES" : "NO";
//     cout << result;
// }
