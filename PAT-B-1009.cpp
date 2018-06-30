#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	scanf ("%[^\n]%*c", str);
	int back=strlen(str)-1;
	for(int i=strlen(str)-1;i>=-1;i--) {
		if(str[i]==' ' || i==-1) {
			for(int k=i+1;k<=back;k++) {
				cout<<str[k];
			}
			if(i!=-1)cout<<" ";
			back=i-1;
		}
	}
	return 0;
}
