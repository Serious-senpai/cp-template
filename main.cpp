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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
