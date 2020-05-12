#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    if(n==1)
        s="one";
    else if(n==2)
        s="two";
    else if(n==3)
        s="three";
    else if(n==4)
        s="four";
    else if(n==5)
        s="five";
    else if(n==6)
        s="six";
    else if(n==7)
        s="seven";
    else if(n==8)
        s="eight";
    else if(n==9)
        s="nine";
    else
        s="Greater than 9";
    cout<<s;


    return 0;
}
