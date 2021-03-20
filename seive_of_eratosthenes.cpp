#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<ll> primelist;
    ll n;
    cin>>n;
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            primelist.push_back(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    for (auto i = primelist.begin(); i != primelist.end() ; i++)
    {
        cout << *i << " ";
    }
    return 0;
}
