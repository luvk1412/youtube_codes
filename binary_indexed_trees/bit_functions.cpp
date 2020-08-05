#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int bit[N];

void update(int i, int x){
	for(; i <= n; i += (i&-i))
		bit[i] += x;
}

int sum(int i){
	int ans = 0;
	for(; x > 0; x -= x&-x)
		sum += bit[x];
	return ans;
}

int main(){
	
}