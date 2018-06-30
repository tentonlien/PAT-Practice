#include <iostream>
using namespace std;

bool check(char str[100]) {
	// 1
	bool p=false, a=false, t=false;
	for(int i=0;str[i]!=0;i++) {
		if(str[i]=='P') p=true;
		if(str[i]=='A') a=true;
		if(str[i]=='T') t=true;
		if(str[i]!='P' && str[i]!='A' && str[i]!='T') {
			return false;
		}
	}
	
	if(p==false ||a==false || t==false) {
		return false;
	}
	
	// 2
	for(int i=0;str[i]!=0;i++) {
		if(str[i]=='P') {
			if(str[i+1]!='A') {
				return false;
			} else {
				if(str[i+2]!='T') {
					if(str[i+2]!='A') {
						return false;
					}
					if(str[i+3]!='T') {
						return false;
					}
				}
			}
		}
	}
	
	// 3
	for(int i=0;str[i]!=0;i++) {
		if(str[i]=='P') {
			for(int k=0;k<i;k++) {
				if(str[k]!='A') {
					return false;
				}
			}
		}
		if(str[i]=='T') {
			for(int k=i+1;str[k]!=0;k++) {
				if(str[k]!='A') {
					return false;
				}
			}
		}
	}
	
	return true;
}

int main() {
	int n;
	char str[10][100];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>str[i];
	}
	for(int i=0;i<n;i++) { 
		if(check(str[i])) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
} 
