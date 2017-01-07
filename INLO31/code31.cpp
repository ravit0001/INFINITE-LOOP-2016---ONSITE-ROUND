#include<iostream>
#include<stdio.h>
#include<map>
typedef  long long int ll;
using namespace std;
 
int main()
{
    ll a,b,c,d,e,k,l=0,z,i;
    map <ll,ll> m;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    z=a+b+c+d+e;
    for(i=0;i<z;i++)
    {
        scanf("%lld",&k);
        m[k]++;
    }
    for (map<ll,ll>::iterator it=m.begin(); it!=m.end(); ++it)
     {
        if( it->second >=3)
        l++;
     }
     printf("%lld\n",l);
}  