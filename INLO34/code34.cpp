#include<stdio.h>
#define s(x) scanf("%lld",&x)
#define M 1000000007
typedef long long int ll;
ll f(ll a,ll b,ll c)
{
 
ll ans=1 ;                           
  while(b !=0 ) {
     
           if(b%2 == 1) {             
             ans = ans*a ; 
              ans = ans%c;      
           }
   a = a*a;                 
   a %= c;                   
   b /= 2;                
}
return ans;
}
int main()
{
  ll t;
  s(t);
  while(t--)
  {
    ll z,n; 
    s(n);
    z=f(2,n,M);
    //if(z>0)
    printf("%lld\n",z-1);
    //else
  }
  return 0;
}   