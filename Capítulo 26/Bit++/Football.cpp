#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string Football(string s)
{
    string zeroes = "0000000";
    string ones = "1111111";

    for(int i = 0; i < s.size(); i++)
    {
        if(s.find(zeroes) || s.find(ones))
            return "YES";
        else
            return "NO";
    }
}

int main()
{
    string f;
    cin >> f;
    cout << Football(f);
}
