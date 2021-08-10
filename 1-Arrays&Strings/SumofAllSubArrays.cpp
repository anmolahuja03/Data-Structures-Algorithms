#define mod 1000000007
#define ll long long

//Modular Arithmetic Laws

//1 - (a+b)%mod = (a%mod + b%mod)%mod
//2 - (a*b)%mod = (a%mod * b%mod)%mod
// A  B  C  D  E      - Array a
//       |
// ----- a[i]----
//  (i+1)     (n-i)
// Total No of subarrays containing a[i] in them = (i+1)(n-1)*a[i]

class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans=(ans+(a[i] * (i+1) * (n-i))%mod)%mod;
        }
        return ans;
    }
};