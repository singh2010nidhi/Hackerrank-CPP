#include<bits/stdc++.h>

using namespace std;
class Box
{
    private:
        int l,b,h;

    public:

        Box()
        {
            l=0,b=0,h=0;
        }

        Box(int length,int breadth,int height)
        {
            l=length;
            b=breadth;
            h=height;
        }
        Box(Box &B)
        {
            l=B.l;
            b=B.b;
            h=B.h;

        }
        int getLength()
        {
            return l;
        }
        int getBreadth ()
        {
            return  b;
        }
        int getHeight ()
        {
            return h;
        }
        long long CalculateVolume()
        {
            long long z=(long long)l*b*h;
            return z;
        }


       friend bool operator<(Box &A,Box &B)
        {
            if(A.l<B.l||(A.b<B.b && A.l==B.l)||(A.h<B.h && A.l==B.l && A.b==B.b))
                return true;
            else
                return false;
        }

        friend ostream& operator<<(ostream& out, const Box& B)

        {
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
};
