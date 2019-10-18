#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ll long long
#define repi(i,a,b) for(int i=a; i<=b; i++) 
#define repd(i,a,b) for(int i=a; i>=b; i--)

const int INF = ~(1<<31);

vector<bool> is_prime(INT_MAX, true);
void seive_(int n){
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
	    if (is_prime[i]) {
	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
}
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
//a.x + b.y = gcd(a, b)
int gcd(int a, int b, int & x, int & y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// cout<<binpow(2,10, MOD);
	//seive_(100);
	// is_prime[100]? cout<<"Yes\n": cout<<"No";
	// gcd(6,12,x,y);
	return 0;
}
