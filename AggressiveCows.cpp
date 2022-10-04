#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define ll long long

bool KyaPlaceHui(ll *a, ll n, ll c, ll mid) {
    ll placed_cows = 1;
    ll placed_cow_pos = 0;
    for (ll i = 1; i < n; ++i)
    {
        if (a[i] - a[placed_cow_pos] >= mid) {
            placed_cows++;
            placed_cow_pos = i;
            if (placed_cows == c) {
                return true;
            }
        }
    }
    return false;
}

ll AggressiveCows(ll *a, ll n, ll c) {
    ll s = 0, e = INT_MAX;
    ll ans = INT_MIN;
    while (s <= e) {
        ll mid = (s + e) / 2;
        if (KyaPlaceHui(a, n, c, mid)) {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
int main() {
    ll n, c;
    ll a[100005];
    cin >> n >> c;
    for (ll i = 0; i < n; ++i) {cin >> a[i];}
    sort(a, a + n);
    cout << AggressiveCows(a, n, c) << endl;

    return 0;
}
