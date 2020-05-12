#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age;
        string fname;
        string lname;
        int std;
        stringstream s;
        string st;
    public:

        void set_age(int a)
        {
            age=a;
        }
        void set_first_name(string s1)
        {
            fname=s1;
        }
        void set_last_name(string s2)
        {
            lname=s2;
        }
        void set_standard(int s)
        {
            std=s;
        }
        int get_age()
        {
            return age;
        }
        string get_first_name()
        {
            return fname;
        }
        string get_last_name()
        {
            return lname;
        }
        int get_standard()
        {
            return std;
        }
        string to_string()
        {
            s<<age<<","<<fname<<","<<lname<<","<<std;
            string ss;
            while(s>>ss)
                st.append(ss);
            return st;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
