#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define int long long

using namespace std;

#ifndef ONLINE_JUDGE // Collapse this

void pipe(const char *file_name)
{
    cout << "Reading from " << file_name << endl;
    freopen(file_name, "r", stdin);
}

#endif

namespace std
{
    /**
     * @brief This does exactly what you think it does
     *
     * @param _x The first value
     * @param _y The second value
     * @param _z The third value
     * @return The minimum of the 3 values
     */
    template <typename T>
    const T &min(const T &_x, const T &_y, const T &_z)
    {
        return min(_x, min(_y, _z));
    }

    /**
     * @brief This does exactly what you think it does
     *
     * @param _x The first value
     * @param _y The second value
     * @param _z The third value
     * @param _a The fourth value
     * @return The minimum of the 4 values
     */
    template <typename T>
    const T &min(const T &_x, const T &_y, const T &_z, const T &_a)
    {
        return min(_x, min(_y, _z, _a));
    }

    template <typename CharT, typename _ForwardIterator>
    void __list_elements(basic_ostream<CharT> &stream, const _ForwardIterator &_begin, const _ForwardIterator &_end)
    {
        for (auto iter = _begin; iter != _end; iter++)
        {
            stream << *iter;
            if (next(iter) != _end)
            {
                stream << ", ";
            }
        }
    }

    template <typename CharT, typename T, size_t N>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const array<T, N> &_v)
    {
        stream << "[";
        __list_elements(stream, _v.begin(), _v.end());
        stream << "]";

        return stream;
    }

    template <typename CharT, typename T>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const vector<T> &_v)
    {
        stream << "[";
        __list_elements(stream, _v.begin(), _v.end());
        stream << "]";

        return stream;
    }

    template <typename CharT, typename T>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const deque<T> &_v)
    {
        stream << "[";
        __list_elements(stream, _v.begin(), _v.end());
        stream << "]";

        return stream;
    }

    template <typename CharT, typename T>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const list<T> &_l)
    {
        stream << "[";
        __list_elements(stream, _l.begin(), _l.end());
        stream << "]";

        return stream;
    }

    template <typename CharT, typename T, typename Compare, typename Alloc>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const set<T, Compare, Alloc> &_s)
    {
        stream << "{";
        __list_elements(stream, _s.begin(), _s.end());
        stream << "}";

        return stream;
    }

    template <typename CharT, typename T, typename Compare, typename Alloc>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const multiset<T, Compare, Alloc> &_s)
    {
        stream << "{";
        __list_elements(stream, _s.begin(), _s.end());
        stream << "}";

        return stream;
    }

    template <typename CharT, typename T1, typename T2, typename Compare, typename Alloc>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const map<T1, T2, Compare, Alloc> &_m)
    {
        vector<pair<T1, T2>> _v(_m.begin(), _m.end());

        stream << "{";
        for (auto iter = _m.begin(); iter != _m.end(); iter++)
        {
            stream << iter->first << ": " << iter->second;
            if (next(iter) != _m.end())
            {
                stream << ", ";
            }
        }
        stream << "}";

        return stream;
    }

    template <typename CharT, typename T1, typename T2, typename Compare, typename Alloc>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const unordered_map<T1, T2, Compare, Alloc> &_m)
    {
        vector<pair<T1, T2>> _v(_m.begin(), _m.end());

        stream << "{";
        for (auto iter = _m.begin(); iter != _m.end(); iter++)
        {
            stream << iter->first << ": " << iter->second;
            if (next(iter) != _m.end())
            {
                stream << ", ";
            }
        }
        stream << "}";

        return stream;
    }

    template <typename CharT, typename T1, typename T2>
    basic_ostream<CharT> &operator<<(basic_ostream<CharT> &stream, const pair<T1, T2> &_p)
    {
        return stream << "(" << _p.first << ", " << _p.second << ")";
    }
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
