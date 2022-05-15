#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int>List;
auto main()->int
{
    int size;
    cin >> size;
    List.resize(100,0);
    for (int i = 0; i != size; i++)
    {
        int n;
        cin >> n;
        List[n] = List[n] + 1;
    }
    for (int r = 0; r != List.size(); r++)
    {
        for (int t = 0; t != List[r];t++)
        {
            cout << r << " ";
        }
    }
    return 0;
}
