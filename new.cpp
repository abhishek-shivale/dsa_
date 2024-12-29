#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     for (int n = a; n <= b; n++) {
//         if (n >= 1 && n <= 9) {
//             if (n == 1) cout << "one\n";
//             else if (n == 2) cout << "two\n";
//             else if (n == 3) cout << "three\n";
//             else if (n == 4) cout << "four\n";
//             else if (n == 5) cout << "five\n";
//             else if (n == 6) cout << "six\n";
//             else if (n == 7) cout << "seven\n";
//             else if (n == 8) cout << "eight\n";
//             else if (n == 9) cout << "nine\n";
//         } else {
//             if (n % 2 == 0) cout << "even\n";
//             else cout << "odd\n";
//         }
//     }

//     return 0;
// }

// int main() {
// 	int a;
// 	while(cin >> a){
// 		if(a == 42) break;
// 		cout << a << endl;
// 	}
// 	return 0;
// }

// int main() {
// 	int T;
// 	cin >> T;
// 	while(T--){
// 		int N;
// 		cin >> N;
// 		int sum = 0;

// 		while(N > 0){
// 			sum += N % 10;
// 			N /= 10;
// 		}
// 		cout << sum << endl;
// 	}
// 	return 0;
// }

// int reverseNumber(int n) {
//     int reversed = 0;
//     while (n > 0) {
//         reversed = reversed * 10 + (n % 10);
//         cout << reversed << endl;
//         n /= 10;
//     }
//     return reversed;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         cout << reverseNumber(N) << endl;     }
//     return 0;
// }

// int main() {
//     int T;
//     cin >> T;

//      int size = 2 * T - 1;

//     for (int i = 0; i < size; i++) {
//         for(int j = 0; j < size; j++){
//             int value = T - min(min(i,j), min(size - i - 1, size - j - 1));
//         	cout << value << " ";
//         }
//         cout<< endl;
//     }

//     return 0;
// }

// int main(){
//     string a, b;
//     cin >> a >> b;

//     cout << a.length() << " " << b.length() << endl;

//     cout << a + b << endl;

//     char c = b[0];

//     b[0] = a[0];
//     a[0] = c;

//     cout << a << " " << b << endl;
// }


// int main(){
//     string a;
//     cin >> a;

//     string str;

//    for(int i = a.length() - 1; i >= 0; i--){
//     str.push_back(a[i]);
//    }
//    cout << str << endl;
// }


// int main() {
//     string a;
//     cin >> a;

//     bool isPalindrome = true;
//     int n = a.length();

//     for (int i = 0; i < n / 2; i++) {
//         if (a[i] != a[n - 1 - i]) {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// int main() {
//     string a;
//     cin >> a;

//     int n = a.length();
//     string str;

//     for (int i = 0; i < n ; i++) {
//         if(a[i] == '(' || a[i] == ')' ){
//             if(a[i] == '(' && a[i + 1] == ')'){
//                 str.push_back('o');
//             }
//         }else{
//             str.push_back(a[i]);
//         }
//     }

//     cout << str << endl;

//     return 0;
// }

// int checkRowColumnSums(int N, int M, vector<vector<int>>& A) {
//     int minDim = min(N, M);
//     for (int i = 0; i < minDim; ++i) {
//         int rowSum = 0, colSum = 0;

//         // for (int j = 0; j < M; ++j) {
//         //     rowSum += A[i][j];
//         // }

//         for (int j = 0; j < N; ++j) {
//             cout << j << i << endl;
//             colSum += A[j][i];
//         }

//         // if (rowSum != colSum) {
//         //     return 0;
//         // }
//     }

//     return 1;
// }

// int main() {
//     int N = 2, M = 2;
//     vector<vector<int>> A = {{2, 4}, {3, 1}};

//     cout << checkRowColumnSums(N, M, A) << endl;
//     return 0;
// }

// int main() {
//    int n;

//    cin >> n;

//    vector<int>arr(n);

//    for (int i = 0; i < n; ++i)
//    {
//       cin >> arr[i];
//    }

//    for (int j = n - 1; j >= 0; --j)
//    {
//       cout << arr[j];
//       if(j > 0) cout << " ";
//    }
// cout << endl;
// return 0;
// }

