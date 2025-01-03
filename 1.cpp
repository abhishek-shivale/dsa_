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

// int main() {
//    int T;
//    cin >> T;
//    int constest = 0;
//    while(T--) {
//       int A[3] = {0};
//       int count = 0;
//       for(int i = 0; i < 3; i++) {
//          cin >> A[i];
//          if(A[i] == 1) {
//             count++;
//          }
//       }
//       if(count > 1) {
//          constest++;
//       }
//    }
//       cout << constest << endl;
// }

// int main() {
//    int arr[5][5];
//    int diffrow = 0, diffcol = 0, count = 0;
//    for(int i = 0; i < 5; i++) {
//       for(int j = 0; j < 5; j++) {
//          cin >> arr[i][j];
//           if(arr[i][j] == 1) {
//             diffrow = abs(2 - i);
//             diffcol = abs(2 - j);
//          }
//       }
//    }
//       cout << diffrow + diffcol   <<endl;
//  }

// char toLoweecase(char c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c + 'a' - 'A';
//     }
//     return c;
// }

// int main() {
//     string str1, str2;
//     cin >> str1 >> str2;
//     for (int i = 0; i < str1.size(); i++) {
//         char char1 = toLoweecase(str1[i]);
//         char char2 = toLoweecase(str2[i]);
//         if (char1 < char2) {
//             cout << -1 << endl;
//             return 0;
//         } else if (char1 > char2) {
//             cout << 1 << endl;
//             return 0;
//         }
//     }
//     cout << 0 << endl;
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm> // For sort function
using namespace std;

int main() {
    string s;
    cin >> s;
    string numbers = "";
    for (char ch : s) {
        if (ch != '+') {
            numbers += ch;
        }
    }
    sort(numbers.begin(), numbers.end());

    string result = "";
    for (size_t i = 0; i < numbers.size(); i++) {
        result += numbers[i];
        if (i != numbers.size() - 1) {
            result += '+';
        }
    }

    cout << result << endl;

    return 0;
}
