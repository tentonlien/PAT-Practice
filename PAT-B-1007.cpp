#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
	for(int i=2;i<=sqrt(x);i++) {
		if(x%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n,k=3;
	cin>>n;
	static int prime[10000],max;
	prime[0]=2;
	while(prime[max]<=n) {
		if(isPrime(k)) {
			prime[++max]=k;
			
		}
		k++;
	}
	static int sum;
	for(int i=1;i<max;i++) {
		//cout<<prime[i]<<endl;
		if(prime[i]-prime[i-1]==2) {
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
