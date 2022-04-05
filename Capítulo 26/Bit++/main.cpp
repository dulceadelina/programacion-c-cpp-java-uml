#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    std::vector<string> statements;
    std::vector<string>::iterator it;
    it = statements.begin();

    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        it = statements.insert(it, temp);
        it++;
    }

    int x = 0;
    string increment = "++";
    string decrement = "--";

    for(int i = 0; i < n; i++)
    {
        size_t c = statements[i].find(increment);
        size_t d = statements[i].find(decrement);

        if(c != string::npos)
            x++;
        if(d != string::npos)
            x--;
    }

    cout << x;
    return 0;
}
