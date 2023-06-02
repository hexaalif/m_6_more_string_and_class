#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int mk1;
    int mk2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        mk1 = m1;
        mk2 = m2;
    }
    void hello()
    {
        cout << "hello" << endl;
    }
    int total()
    {
        return mk1 + mk2;
    }
};

int main()
{
    Person rakib("rakib ahsan", 24, 95, 63);
    cout << rakib.name << " " << rakib.age << endl;
    // rakib.hello() << endl;
    cout << rakib.total();
    return 0;
}