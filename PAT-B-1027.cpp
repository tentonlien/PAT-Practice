#include <iostream>
using namespace std;
int main() {
	int n;
	char c;
	cin>>n>>c;
	int line=1;
	int sum=1;
	while(sum+(2*(line+1)-1)*2<=n) {
		sum+=(2*(++line)-1)*2;
	}
	for(int i=0;i<line;i++) {
		for(int k=0;k<i;k++) {
			cout<<" "; 
		} 
		for(int k=0;k<(line-i)*2-1;k++) {
			cout<<c;
		}
		cout<<endl;
	}
	for(int i=1;i<line;i++) {
		for(int k=0;k<line-i-1;k++) {
			cout<<" "; 
		} 
		for(int k=0;k<(i+1)*2-1;k++) {
			cout<<c;
		}
		cout<<endl;
	}
	cout<<n-sum<<endl;
	return 0;
} 
