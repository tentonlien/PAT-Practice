#include <iostream>
using namespace std;

int main() {
	int t;
	long long a[10],b[10],c[10];
	cin>>t;
	for(int i=0;i<t;i++) {
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<t;i++) {
		int k=i+1;
		if(a[i]+b[i]>c[i]) {
			cout<<"Case #";
			cout<<k;
			cout<<": true"<<endl;
		} else {
			cout<<"Case #";
			cout<<k;
			cout<<": false"<<endl;
		}
	}
	return 0;
} 
