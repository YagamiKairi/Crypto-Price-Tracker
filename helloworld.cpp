#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"I think this is the last commit"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
