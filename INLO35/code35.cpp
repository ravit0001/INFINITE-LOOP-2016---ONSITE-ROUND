#include<iostream>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
typedef long long int ll;
int main()
{
  ll t,i,j,prime[201];
  
    prime[0]=0;
  prime[1]=0;
  for(i=2;i<=200;i++)
    prime[i]=1; 
    
  for(i=2;i*i<=200;i++)                                // prime numsbers upto 200
  {
    if(prime[i]==1)
    {
      for(j=i*i;j<=200;j+=i)
      prime[j]=0;
      
    }
  } 
  
  scanf("%lld",&t);
  while(t--)
  {
    ll n,k,x;
    scanf("%lld%lld",&n,&k);
    map<ll,ll>m;
    x=k;
    for(i=2;i<=x;i++)
    {
      if(prime[i]==1 && k%i==0)
      {
        while(k%i==0)
        {
          m[i]++;
          k/=i;
        }
        }
    }
    ll minn=9999999,sum,z;
    map<ll,ll>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
      //cout<<it->first<<" "<<it->second<<" ";
        x=n;
        sum=0;
        while(x)
        {
          sum+=x/(it->first);
          x/=it->first;
          //cout<<x<<" ";
      }
      //cout<<sum<<" "<<"\n";
      z=sum/(it->second);
      minn=min(minn,z);
      
    }
     
      cout<<minn<<"\n"; 
      
    
  }
    
   return 0;
}  