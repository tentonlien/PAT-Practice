#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	string item[100][4];
	char res[105]="";
	int vacant=0;
	for(int i=0;i<n;i++) {
		for(int k=0;k<4;k++) {
			cin>>item[i][k];
			if(item[i][k][2]=='T') {
				res[vacant]+=item[i][k][0];
				vacant++;
			}
		}
	}
	res[vacant]=0;
	for(int i=0;res[i]!=0;i++) {
		if(res[i]=='A') cout<<1;
		if(res[i]=='B') cout<<2;
		if(res[i]=='C') cout<<3;
		if(res[i]=='D') cout<<4;
	}
	return 0;
}
