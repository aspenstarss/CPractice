#include <bits/stdc++.h>
using namespace std;

#define what_is(x) cerr << #x << " is " << x << endl;
#define a_macro(args...) sum(args)
int sum() { return 0; }
template<typename T, typename... Args>
T sum(T a, Args... args) { return a + sum(args...); }

int main() { 
    cout << sum(5, 7, 2, 2) + sum(3.14, 4.89); 
    /* prints "24.03" */ 
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cerr << *it << " = " << a << endl;
// 	err(++it, args...);
// }

// int main() {
// 	int a = 4, b = 8, c = 9;
// 	error(a, b, c);
// }
// int func(vector<int>& nums);
    
// __gcd(value1, value2);

// int main(){
//     vector<int> nums;
//     int n = 5, t;
//     // scanf("%d", &n);
//     // for(int i = 0; i < n; i++){
//     //     scanf("%d", &t);
//     //     nums.push_back(t);
//     // }
//     what_is(n)
//     t = __builtin_clz(8);
//     printf("%d",t);

//     // int result = func(nums);
//     // printf("%d", result);
//     return 0;
// }