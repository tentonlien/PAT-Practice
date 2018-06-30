#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
	int sCouple,sGuest;
	//string male[25000],female[25000],guest[50000];
	string couple[100000];
	string guest[50000];
	cin>>sCouple;
	for(int i=0;i<sCouple;i++) {
		string temp1,temp2;
		cin>>temp1>>temp2;
		couple[atoi(temp1.c_str())]=temp2;
	}
	cin>>sGuest;
	for(int i=0;i<sGuest;i++) {
		cin>>guest[i];
	}
	for(int i=0;i<sGuest;i++) {
		if(couple[atoi(guest[i].c_str())])
	}
	
}
