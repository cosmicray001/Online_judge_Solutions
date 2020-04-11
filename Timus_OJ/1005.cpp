#include <bits/stdc++.h>
#define le 21
#define ll long long int
using namespace std;
vector<ll> v;
ll n[le], mx = 0, mn = INT_MAX, sum = 0;
void fnc(int i, int len){
	if(i == len){
		sum = 0;
		for(int i = 0; i < v.size(); i++) sum += v[i];
		ll dif = mx - sum;
		mn = min(mn, abs(sum - dif));
		return;
	}
	fnc(i + 1, len);
	v.push_back(n[i]);
	fnc(i + 1, len);
	v.pop_back();
}
int main(){
	int len;
	scanf("%d", &len);
	for(int i = 0; i < len; scanf("%lld", &n[i]), mx += n[i], i++);
	fnc(0, len);
	printf("%lld\n", mn);
	return 0;
}
