#include <iostream>
using namespace std;
int main() {
	int a1=0,a2=0,a3=0,a5=0;
	double a4=0;
	int n,a[1024],m=0,mm=0;
	bool isa2=false;
	int x;
	cin>>x;
	do {
		cin>>a[m];
		m++;
	} while(cin.get()!='\n');
	bool order=true;
	for(int i=0;i<m;i++) {
		if(a[i]%5==0 && a[i]%2==0) {
			a1+=a[i];
		} else if(a[i]%5==1) {
			isa2=true;
			if(order) {
				a2+=a[i];
				order=false;
			} else {
				a2-=a[i];
				order=true;
			}
		}
		else if(a[i]%5==2) {
			a3++;
		}
		else if(a[i]%5==3) {
			a4+=a[i];
			mm++;
		}
		else if(a[i]%5==4 && a[i]>a5) {
			a5=a[i];
		}
	}
	if(a1==0) {
		cout<<"N ";
	} else {
		cout<<a1<<" ";
	}
	if(!isa2) {
		cout<<"N ";
	} else {
		cout<<a2<<" ";
	}
	if(a3==0) {
		cout<<"N ";
	} else {
		cout<<a3<<" ";
	}
	if(a4==0) {
		cout<<"N ";
	} else {
		printf("%.1lf ",a4/mm);
	}
	if(a5==0) {
		cout<<"N";
	} else {
		cout<<a5;
	}
	return 0;
}
