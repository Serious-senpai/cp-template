#include <iostream>
#include <vector>

#define int long long
#define INF LLONG_MAX

using namespace std;

template <typename T>
ostream &operator<<(ostream &out, const vector<T> &_v)
{
    int n = _v.size();
    out << "[";
    for (int i = 0; i < n; i++)
    {
        out << _v[i];
        if (i < n - 1)
        {
            out << ", ";
        }
    }
    out << "]";

    return out;
}

template <typename T1, typename T2>
ostream &operator<<(ostream &out, const pair<T1, T2> &_p)
{
    out << "<" << _p.first << ", " << _p.second << ">";
    return out;
}

bool solve()
{
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tests;
    cin >> tests;
    for (int _t = 0; _t < tests; _t++)
    {
        cout << (solve() ? "YES" : "NO") << "\n";
    }
}