#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        reverse(all(v));
        // int mx = *max_element(all(v));
        // int x = (k % mx == 0 ? k / mx : k / mx + 1);
        // show(x);
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum == k)
                break;
            else if (sum > k)
            {
                sum -= v[i];
                break;
            }
        }
        cout << abs(k - sum) << '\n';
    }
    return 0;
}