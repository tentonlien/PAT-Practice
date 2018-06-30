#include <iostream>
using namespace std;
char max(int a,int b,int c) {
	if(b>=a && b>=c) {
		return 'B';
	} else if(a>=b && a>=c) {
		return 'C';
	} else {
		return 'J';
	}
}

int main() {
	int n;
	char a[100000],b[100000];
	int ac=0,ab=0,aj=0,bc=0,bb=0,bj=0;
	int aw=0,al=0,am=0,bw=0,bl=0,bm=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++) {
		if(a[i]=='C') {
			if(b[i]=='C') {
				am++;
				bm++;
			} else if(b[i]=='B') {
				al++;
				bw++;
				bb++;
			} else {
				aw++;
				bl++;
				ac++;
			}
		} else if(a[i]=='B') {
			if(b[i]=='C') {
				aw++;
				bl++;
				ab++;
			} else if(b[i]=='B') {
				am++;
				bm++;
			} else {
				al++;
				bw++;
				bj++;
			}
		} else {
			if(b[i]=='C') {
				al++;
				bw++;
				bc++;
			} else if(b[i]=='B') {
				aw++;
				bl++;
				aj++;
			} else {
				am++;
				bm++;
			}
		}
	}
	cout<<aw<<" "<<am<<" "<<al<<endl;
	cout<<bw<<" "<<bm<<" "<<bl<<endl;
	cout<<max(ac,ab,aj)<<" "<<max(bc,bb,bj);
	return 0;
}
