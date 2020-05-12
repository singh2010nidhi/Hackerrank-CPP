#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,t,one,two,three;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    cin>>one;
    v.erase(v.begin()+one-1);
    cin>>two>>three;
    v.erase(v.begin()+two-1,v.begin()+three-1);
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
