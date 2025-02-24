#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll a, b;
	cin >> a >> b;
	int limit = sqrt(b) + 1;
	vector <bool> isPrime(limit + 1, true);
	vector <int>primes;
	//isPrime 구하기
	for (ll i = 2; i <= limit; i++) {
		if (isPrime[i]) {
			primes.push_back(i);
			for (ll j = i * i; i <= b; j += i) {
				isPrime[j] = false;
			}
		}
	}
	
	//거의 소수 구하기
	ll cnt = 0;
	for (ll i : primes) {
		ll temp = i * i;
		while (temp <= b) {
			if (temp >= a) {
				cnt++;
			}
			if (temp > (b / i)) break;
			temp *= i;
		}
	}
	cout << cnt;

	return 0;
}