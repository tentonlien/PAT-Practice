#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n,sum[40],idx=0,s=0;
	char num[10000][5];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>num[i];
	}
	for(int i=0;i<40;i++) {
		sum[i]=0;
	}
	for(int i=0;i<n;i++) {
		int temp=0;
		for(int k=0;num[i][k]!=0;k++) {
			temp+=num[i][k]-48;
		}
		if(sum[temp]==0)s++;
		sum[temp]=1;
	}
	cout<<s<<endl;
	int ti=1;
	for(int i=0;i<40;i++) {
		if(sum[i]==1) {
			if(ti==s) {
				cout<<i;
			} else {
				cout<<i<<" ";
				ti++;
			}
			
		}
	}
	return 0;
}
