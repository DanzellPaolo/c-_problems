#include <bits/stdc++.h>
using namespace std;
int con = 0;
vector<char> arr;

int main()
{

    string x;

    getline(cin, x);

    if (x[0] == '-')
    {
        x = "";
        getline(cin, x);
    }
    reverse(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++)
    {

        if (x[i] == '2' || x[i] == '4' || x[i] == '6' || x[i] == '8')
        {
            arr.push_back(x[i]);
        }
    }

    if (arr.size() > 0)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
        }
    }
    else if (arr.size() == 0)
    {

        cout << "0";
    }
}