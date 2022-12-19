#include <bits/stdc++.h>

#define int long long
#define INF LLONG_MAX
#define inf 1000000007

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

template <typename T>
ostream &operator<<(ostream &out, const set<T> &_s)
{
    vector<int> _v(_s.begin(), _s.end());
    int n = _v.size();
    out << "{";
    for (int i = 0; i < n; i++)
    {
        out << _v[i];
        if (i < n - 1)
        {
            out << ", ";
        }
    }
    out << "}";

    return out;
}

template <typename T1, typename T2>
ostream &operator<<(ostream &out, const pair<T1, T2> &_p)
{
    out << "<" << _p.first << ", " << _p.second << ">";
    return out;
}

template <typename T>
const T &min(const T &_x, const T &_y, const T &_z)
{
    return min(_x, min(_y, _z));
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    cout << "Reading from input.txt" << endl;
    freopen("input.txt", "r", stdin);
#endif

    // Code begins here
}
