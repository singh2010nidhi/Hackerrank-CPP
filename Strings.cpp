#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,t;
    cin>>s;
    cin>>t;
    cout<<s.size()<<" "<<t.length()<<endl;
    cout<<s+t<<endl;
    char c=s[0];
    s[0]=t[0];
    t[0]=c;
    cout<<s<<" "<<t;

    return 0;
}

