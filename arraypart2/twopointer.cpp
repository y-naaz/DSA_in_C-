#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 1, 0, 1, 0, 1, 1, 0};
    int i = 0, j = v.size() - 1;
    while (i < j)
    {

        if (v[i] == 0)
        {
            i++;
        }
        if (v[j] == 1)
            j--;
        if (i > j)
            break;
        if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}