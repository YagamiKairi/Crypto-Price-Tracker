#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"how to add more message?"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
