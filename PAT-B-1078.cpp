#include <iostream>
using namespace std;
int main() {
	char opt;
	char str[1024];
	
	cin.get(opt);
	getchar();
	cout<<endl;
	cin.getline(str,1024);
	if(opt=='C') {
		for(int i=0;str[i]!=0;i++) {
			int count=0;
			for(int k=i+1;str[k]==str[i];k++) {
				count++;
			}
			cout<<++count<<str[i];
			i+=count-1;
		}
	} else {
		for(int i=0;str[i]!=0;i++) {
			if(str[i]>='0' && str[i]<='9') {
				if(str[i+1]>'9') {
					for(int k=0;k<str[i]-48;k++) {
						cout<<str[i+1];
					}
				} else {
					for(int k=0;k<(str[i]-48)*10+str[i+1]-48;k++) {
						cout<<str[i+2];
					}
				}
			}
		}
	}
	return 0;
}
