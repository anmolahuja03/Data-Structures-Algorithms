#include <iostream>
using namespace std;
#include <algorithm>
#include<limits.h>
 
int main(){
    long long int n,p,q,r;
    cin>>n>>p>>q>>r;
    long long int*arr= new long long int[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    //prefix max
    long long int*pmax=new long long int[n];
    pmax[0]=p*arr[0];
    for(long long int i=1;i<n;i++){
        pmax[i]= max(pmax[i-1],p*arr[i]);
    }
    
    long long int smax=LLONG_MIN;
    long long int cmax=LLONG_MIN;
    for(long long int i=n-1;i>=0;i--){
        smax=max(smax,r*arr[i]);
        cmax=max(cmax,pmax[i]+q*arr[i]+smax);
    }
    
    cout<< cmax;
    return 0;
}
