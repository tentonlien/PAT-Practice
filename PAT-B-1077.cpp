#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n,m,a[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++) {
		for(int k=0;k<6;k++) {
			cin>>a[i][k];
		}
	}
	for(int i=0;i<n;i++) {
		double g1=a[i][0];
		for(int k=1;k<6;k++) {
			if(a[i][k]>m || a[i][k]<0) {
				a[i][k]=-1;
			}
		}
		sort(a[i]+1,a[i]+5);
		for(int k=1;k<6;k++) {
			if(a[i][k]!=-1) {
				a[i][k]=-1;
				break;
			}
		}
		a[i][5]=-1;
		double g2=0;
		int count=0;
		for(int k=1;k<6;k++) {
			if(a[i][k]!=-1) {
				g2+=a[i][k];
				count++;
			}
		}
		g2=g2/count;
		double res=(g1+g2)/2;
		cout<<round(res)<<endl;
	}
	return 0;
}
