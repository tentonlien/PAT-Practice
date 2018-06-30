#include <iostream>
using namespace std;
int main() {
	int n,m,num[100];
	cin>>n>>m;
	for(int i=0;i<n;i++) {
		cin>>num[i];
	}
	while(m>n) {
		m-=n;
	}
	if(n>m) {
		for(int i=n-m;i<n;i++) {
			cout<<num[i]<<" ";
		}
		for(int i=0;i<n-m-1;i++) {
			cout<<num[i]<<" ";
		}
		cout<<num[n-m-1];
	} else {
		for(int i=0;i<n-1;i++) {
			cout<<num[i]<<" ";
		}
		cout<<num[n-1];
	}
	return 0;
}
