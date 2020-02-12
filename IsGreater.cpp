#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int equilibrium(vector<ll> &vec)
{
    if (vec.size() == 1)
    {
        return 1;
    }
    else if (vec.size() == 2)
    {
        return -1;
    }
    else
    {
        vector<int> sum(vec.size());
        sum[0] = vec[0];
        for (auto i = 1; i < vec.size(); ++i)
            sum[i] = sum[i - 1] + vec[i];
        for (auto i = 1; i < vec.size(); ++i)
        {
            if (sum[i - 1] == (sum[vec.size() - 1] - sum[i]))
            {
                return i + 1;
            }
        }
    }
    return -1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n);
        for (auto i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }
        cout << equilibrium(vec);
        cout << endl;
    }
    return 0;
}