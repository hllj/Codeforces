#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(false); cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const int nmax = 1e5 + 10;
int main() {
    IO;
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    int n, k;
    scanf("%d %d", &n, &k);
    int a[nmax];
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int t = n - 1;
    while (t > 0 && a[t] == a[t + 1]) t--;
    if (t >= k) printf("-1");
    else printf("%d", t);
    return 0;
}
