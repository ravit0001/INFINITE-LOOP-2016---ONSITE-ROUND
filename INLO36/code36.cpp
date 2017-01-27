#include<iostream>
using namespace std;
typedef long long int ll;
 
 
ll fast_pow(ll base, ll n,ll M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ll halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2,M);
}
int main()
{
    ll fact[100001];
    fact[0]=1;
    ll i=1;
    ll MOD=1000000007;
    while(i<=100000)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        i++;
    }
  ll t;
  scanf("%lld",&t);
    while(t--)
    {
        
        ll r,n;
    scanf("%lld%lld",&n,&r);
    n=n-2*r;
    n=n+r-1;
    --r;
        ll numerator,denominator,mmi_denominator,ans;
        numerator=fact[n];
        denominator=(fact[r]*fact[n-r])%MOD;
        mmi_denominator=findMMI_fermat(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
        printf("%lld\n",ans);
    }
    return 0;
}  