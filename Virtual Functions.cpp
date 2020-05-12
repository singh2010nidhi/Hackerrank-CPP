#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        virtual void getdata()=0;
        virtual void putdata()=0;
};

class Professor : public Person{
    public:

        int publications;
        int cur_id;
        static int id;
        Professor(){
            cur_id=++id;
        }
        void getdata()
        {
            cin>>name>>age>>publications;
        }

        void putdata()
        {
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        }
};
int Professor :: id=0;
class Student : public Person{
    public:

        int marks[6];
        int cur_id;
        static int i;
        Student()
        {
            cur_id=++i;
        }
        void getdata()
        {
            cin>>name>>age;
            for(int i=0;i<6;i++)
            {
                cin>>marks[i];
            }
        }
        void putdata()
        {
             cout<<name<<" "<<age<<" ";
            int sum=0;
             for(int i=0;i<6;i++)
            {
                sum+=marks[i];
             }
             cout<<sum<<" "<<cur_id<<endl;
    }
};
int Student :: i=0;
