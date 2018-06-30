#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	static int n,sc[101],m,fin[100000];
	cin>>n;
	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		sc[temp]++;
	}
	cin>>m;
	for(int k=0;k<m;k++) {
		cin>>fin[k];
	}
	for(int k=0;k<m-1;k++) {
		cout<<sc[fin[k]]<<" ";
	}
	cout<<sc[fin[m-1]];
	return 0;
}
