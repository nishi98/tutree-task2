#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[], int n){
    
    vector<int> max;
    int maxi=arr[n-1];
    max.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=maxi){
            maxi=arr[i];
            max.push_back(maxi);
        }
    }
    reverse(max.begin(),max.end());
    return max;
}
int main()
{
       long long n;
       cin >> n;
       int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it:v){
            cout << it << " ";
        }
   
}