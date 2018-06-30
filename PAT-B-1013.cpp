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
	int m,n;
	long prime[10010];
	int max=0;
	int testing=2;
	cin>>m>>n;
	while(max<=n) {
		if(isPrime(testing)) {
			prime[max++]=testing;
		}
		testing++;
	}
	for(int i=m-1;i<n;i++) {
		cout<<prime[i];
		if((i-m+2)%10==0 && i!=n-1) {
			cout<<endl;
		} else if(i!=n-1){
			cout<<" ";
		}
	}
	return 0;
} 
