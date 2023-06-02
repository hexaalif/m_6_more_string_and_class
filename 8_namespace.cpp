#include <bits/stdc++.h>

using namespace std;

namespace rakib
{
    int age = 25;
    void helo()
    {
        cout << "hi namespace" << endl;
    }
}
namespace sakib
{
    int age = 20;
    void helo()
    {
        cout << "hllo namespace" << endl;
    }
}

int main()
{
    cout << rakib::age;
    return 0;
}