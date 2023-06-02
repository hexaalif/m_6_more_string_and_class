#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("rakibAhsan", 23);
    Person *bakib = new Person("Ahsan", 33);
    // rakib = bakib;
    *rakib = *bakib;
    // rakib->name = bakib->name;
    // rakib->age = bakib->age;
    delete bakib;
    cout << rakib->name << endl;
    cout << rakib->age << endl;
    return 0;
}