#include <bits/stdc++.h>

#define int long long
#define INF LLONG_MAX
#define inf 1000000007

using namespace std;

#ifndef ONLINE_JUDGE // Collapse this

void pipe(const char *file_name)
{
    cout << "Reading from " << file_name << endl;
    freopen(file_name, "r", stdin);
}

template <typename T>
void list_elements(ostream &stream, const vector<T> &_v)
{
    int n = _v.size();
    for (int i = 0; i < n; i++)
    {
        stream << _v[i];
        if (i < n - 1)
        {
            stream << ", ";
        }
    }
}

template <typename T>
ostream &operator<<(ostream &stream, const vector<T> &_v)
{
    stream << "[";
    list_elements(stream, _v);
    stream << "]";

    return stream;
}

template <typename T, typename Compare, typename Alloc>
ostream &operator<<(ostream &stream, const set<T, Compare, Alloc> &_s)
{
    vector<T> _v(_s.begin(), _s.end());

    stream << "{";
    list_elements(stream, _v);
    stream << "}";

    return stream;
}

template <typename T, typename Compare, typename Alloc>
ostream &operator<<(ostream &stream, const multiset<T, Compare, Alloc> &_s)
{
    vector<T> _v(_s.begin(), _s.end());

    stream << "{";
    list_elements(stream, _v);
    stream << "}";

    return stream;
}

template <typename T1, typename T2, typename Compare, typename Alloc>
ostream &operator<<(ostream &stream, const map<T1, T2, Compare, Alloc> &_m)
{
    vector<pair<T1, T2>> _v(_m.begin(), _m.end());

    stream << "{";
    int n = _v.size();
    for (int i = 0; i < n; i++)
    {
        stream << _v[i].first << ": " << _v[i].second;
        if (i < n - 1)
        {
            stream << ", ";
        }
    }
    stream << "}";

    return stream;
}

template <typename T1, typename T2>
ostream &operator<<(ostream &stream, const pair<T1, T2> &_p)
{
    stream << "<" << _p.first << ", " << _p.second << ">";
    return stream;
}

#endif

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
    pipe("input.txt");
#endif

    // Code goes here
}
