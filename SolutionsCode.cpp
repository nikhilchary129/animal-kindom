#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define nl "\n"
void solve()
{
    int l, r;
    cin >> l >> r;
    int L, R;
    cin >> L >> R;
    if (l > L)
    {
        swap(l, L);
        swap(r, R);
    }

    if (r < L)
    {
        cout << 1 << nl;
        return;
    }
    if (l == L && r == R)
    {
        cout << r - l << nl;
        return;
    }
    if (l == L)
    {
        cout << min(r, R) - L + 1 << nl;
        return;
    }
    if (r == R)
    {
        cout << R - max(l, L) + 1 << nl;
        return;
    }

    cout << min(r, R) - max(l, L) + 2 << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}