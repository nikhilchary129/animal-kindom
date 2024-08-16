#include <bits/stdc++.h>
using namespace std;

int lower_n = 1;
int upper_n = 100;
int lower_t = 1;
int upper_t = 10000;

int main()
{
    srand(time(0));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = rand() % (upper_t - lower_t + 1) + lower_t;
    cout << t << endl;

    while (t--)
    {
        int l, r, L, R;

        l = rand() % (upper_n - lower_n) + lower_n;
        r = rand() % (upper_n - l) + l + 1;

        L = rand() % (upper_n - lower_n) + lower_n;
        R = rand() % (upper_n - L) + L + 1;

        cout << l << " " << r << endl;
        cout << L << " " << R << endl;
    }

    return 0;
}
