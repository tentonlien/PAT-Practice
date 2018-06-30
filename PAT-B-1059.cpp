#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

bool isPrime(int x) {
	if(x==1) return false;
	for(int i=2;i<=sqrt(x);i++) {
		if(x%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n,k,rpt=0,person[10000],repeat[10000];
	string sch[10000];
	cin>>n;
	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		person[temp]=i+1;
	}
	cin>>k;
	for(int i=0;i<k;i++) {
		cin>>sch[i];
	}
	for(int i=0;i<10000;i++) {
		repeat[i]=0;
	}	
	for(int i=0;i<k;i++) {
		if(repeat[atoi(sch[i].c_str())]==0) {
			if(person[atoi(sch[i].c_str())]==1) {
				cout<<sch[i]<<": Mystery Award"<<endl;
				repeat[atoi(sch[i].c_str())]=1;
			} else if(person[atoi(sch[i].c_str())]>n||person[atoi(sch[i].c_str())]<1) {
				cout<<sch[i]<<": Are you kidding?"<<endl;
			} else if(isPrime(person[atoi(sch[i].c_str())])) {
				cout<<sch[i]<<": Minion"<<endl;
				repeat[atoi(sch[i].c_str())]=1;
			} else {
				cout<<sch[i]<<": Chocolate"<<endl;
				repeat[atoi(sch[i].c_str())]=1;
			}
		} else {
			cout<<sch[i]<<": Checked"<<endl;
		}
	}
	return 0;
}
