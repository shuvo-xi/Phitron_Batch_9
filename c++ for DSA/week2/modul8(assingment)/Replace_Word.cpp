#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, x;
        cin >> s >> x;
        while (true)
        {
            int idx = s.find(x);

            if (idx == -1)
            {
                break;
            }
            else
            {
                s.replace(idx, x.length(), "#");
            }
        }
        cout << s << "\n";
    }

    return 0;
}