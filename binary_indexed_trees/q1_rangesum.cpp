#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int bit[N];

void update(int i, int x){
	for(; i < N; i += (i&-i))
		bit[i] += x;
}

int sum(int i){
	int ans = 0;
	for(; i > 0; i -= (i&-i))
		ans += bit[i];
	return ans;
}

int main(){
	int n, q;
	cin >> n >> q;
	int a[n+10];
	for(int i = 1;i <= n; ++i){
		cin >> a[i];
		update(i, a[i]);
	}

	while(q--){
		int type;
		cin >> type;
		if(type == 1){
			int i, x;
			cin >> i >> x;
			update(i, x - a[i]);
			a[i] = x;
		}
		else{
			int l, r;
			cin >> l >> r;
			cout << sum(r) - sum(l-1) << endl;
		}
	}
}