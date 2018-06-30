#include <iostream>
using namespace std;
int main() {
	//48 65 97
	char str[65],str2[65],str3[65],str4[65];
	char weekday[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int res,res2,res3,halt;
	cin>>str>>str2>>str3>>str4;
	for(int i=0;str[i]!=0;i++) {
		if(str[i]==str2[i]) {
			if(str[i]>='A' && str[i]<='Z') {
				res=str[i]-65;
				//cout<<str[i];
				halt=i;
				break;
			}
		}
	}
	for(int i=halt+1;str[i]!=0;i++) {
		if(str[i]==str2[i]) {
			if(str[i]>='A' && str[i]<='N') {
				res2=str[i]-55;
				break;
			} else if(str[i]>='0' && str[i]<='9') {
				res2=str[i]-48;
			}
		}
	}
	for(int i=0;str3[i]!=0;i++) {
		if(str3[i]==str4[i]) {
			if(str3[i]>='a' && str3[i]<='z' || str3[i]>='A' && str3[i]<='Z') {
				res3=i;
				break;
			}
		}
	}
	cout<<weekday[res]<<" ";
	//cout<<res;
	if(res2<10) {
		cout<<'0'<<res2;
	} else {
		cout<<res2;
	}
	if(res3<10) {
		cout<<":0"<<res3;
	} else {
		cout<<":"<<res3;
	}
	return 0;
}
