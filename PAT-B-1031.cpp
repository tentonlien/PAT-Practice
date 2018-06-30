#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	char id[100][19];
	cin>>n;
	bool all=true;
	for(int i=0;i<n;i++) {
		cin>>id[i];
	}
	int arr[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	
	for(int i=0;i<n;i++) {
		int sum=0;
		bool already=false;
		for(int k=0;k<17;k++) {
			if(id[i][k]>'9' || id[i][k]<'0') {
				all=false;
				cout<<id[i]<<endl;
				already=true;
				break;
			} else {
				sum+=(id[i][k]-48)*arr[k];
			}
		}
		if(!already) {
			int mod=sum%11;
			char arr2[]={'1','0','X','9','8','7','6','5','4','3','2'};
			if(id[i][17]!=arr2[mod]) {
			all=false;
			cout<<id[i]<<endl;
			}
		}
	}
	if(all) {
		cout<<"All passed";
	}
	return 0;
}
