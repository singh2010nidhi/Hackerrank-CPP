#include <cmath>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a;
    for(int i=0;i<n;i++)
    {
        int k,m;
        cin>>k;
        vector<int> q;
        for(int j=0;j<k;j++)
        {
            cin>>m;
            q.push_back(m);
        }
        a.push_back(q);
    }
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    return 0;
}
