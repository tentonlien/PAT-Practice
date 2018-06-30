#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char a[110],b[110];
	cin>>a>>b;
	int l=strlen(b);
	int la=strlen(a);
	if(l<la) {
		for(int i=la-1;i>=0;i--) {
			if(i>=la-l) {
				b[i]=b[i-la+l];
			} else {
				b[i]='0';
			}
		}
			l=la;
	}

	//cout<<b<<endl;
	for(int i=l-1;i>=0;i--) {
		if(la-l+i>=0) {
			if((l-i)%2!=0) {
				int temp=(b[i]+a[la-l+i]-96)%13;
				if(temp==10) {
					b[i]='J';
				} else if(temp==11) {
					b[i]='Q';
				} else if(temp==12) {
					b[i]='K';
				} else {
					b[i]=temp+48;
				}
			} else {
				int temp=b[i]-a[la-l+i];
				if(temp<0) temp+=10;
				b[i]=temp+48;
			}
		}
	}

	for(int i=0;i<l;i++) {
		cout<<b[i];
	}
	cout<<endl;
	return 0;
} 
