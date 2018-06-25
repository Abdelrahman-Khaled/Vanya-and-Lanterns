#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,l;
    cin>>n>>l;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double mx=INT_MIN;
    mx=max(arr[0],l-arr[n-1]);
    for(int i=0;i<n-1;i++){
        mx=max(mx,(arr[i+1]-arr[i])/2.0);
    }
    cout<< fixed<<(double)mx<<endl;
    return 0;
}
