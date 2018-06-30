#include <iostream>
using namespace std;
int main() {
	int n,codeX[1000],codeY[1000];
	char people[1000][15];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>people[i]>>codeX[i]>>codeY[i];
	} 
	int m,codex[1000];
	cin>>m;
	for(int i=0;i<m;i++) {
		cin>>codex[i];
	}
	for(int i=0;i<m;i++) {
		for(int k=0;k<n;k++) {
			if(codeX[k]==codex[i]) {
				cout<<people[k]<<" "<<codeY[k]<<endl;
				break;
			}
		}
	}
	return 0;
} 
