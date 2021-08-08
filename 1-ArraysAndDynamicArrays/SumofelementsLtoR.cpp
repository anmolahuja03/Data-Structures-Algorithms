/*Given array a of N ntegers. Given Q queries
and in each query given L and R print sum of 
array elements from L to R (L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int prefix[N];

int main(){

	//Naive approach
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		prefix[i] = prefix[i-1] + a[i];
	}
	int q;
	cin >> q;
	// while(q--){
	// 	int l, r;
	// 	cin >> l >> r;
	// 	long long sum = 0;
	// 	for(int i = l; i <= r; ++i){
	// 		sum += a[i];
	// 	}
	// 	cout << sum << endl;
	// }
	//O(N) + O(q*N) = 10^10

	//Effecient - Using Precomputation
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << prefix[r] - prefix[l-1] << endl;
	}
	// O(N) + O(Q) = 10^5
	
}