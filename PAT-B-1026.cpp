#include <iostream>
using namespace std;
int main() {
    long c1,c2;
    cin>>c1>>c2;
    double c=(c2-c1)/100.0,ss;
    int h,m,s;
    h=c/3600;
    m=c/60-h*60;
    s=c-h*3600-m*60;
    ss=c-h*3600-m*60;
    if(ss-s>=0.5) s++;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
