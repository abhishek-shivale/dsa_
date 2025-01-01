#include <bits/stdc++.h>

using namespace std;



// int main() {
//    int T;
//    cin >> T;
//    while(T--) {
//       string s;
//       cin >> s;

//       int A[26] = {0};
//       for(int i = 0; i < s.size(); i++) {
//          A[s[i] - 'a']++;
//       }
//       int pass = false;
//       for(int i = 0; i < 26; i++) {
//          if(A[i] > 1){
//             pass = true;
//             break;
//          }
//       }
//       if(pass) {
//          cout << "Yes" << endl;
//       } else {
//          cout << "No" << endl;
//       }

//    }
// }


int main() {
   int T;
   cin >> T;
   int constest = 0;
   while(T--) {
      int A[3] = {0};
      int count = 0;
      for(int i = 0; i < 3; i++) {
         cin >> A[i];
         if(A[i] == 1) {
            count++;
         }
      }
      if(count > 1) {
         constest++;
      }
   }
      cout << constest << endl;
}



