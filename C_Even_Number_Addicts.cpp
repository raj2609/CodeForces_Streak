#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
 
ll  sum(ll arr[],ll n)  {ll sum=0; for(ll i=0; i<n; i++) sum+=arr[i]; return sum;}
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// space for helper functions
bool solve(int even, int odd, vector<vector<vector<int>>> &dp, bool flag)
{  
       
     
    if(dp[odd][even][flag]!=-1)
       return dp[odd][even][flag];

     if(!solve(odd-1, even, dp, flag?!flag:flag) || !solve(odd, even-1, dp, flag?flag:!flag) ) 
       {
        dp[odd][even][flag]= 1;
         return true;
       }
      
         dp[odd][even][flag]= 0;
         return false;
       
}
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
ll n;
cin>>n; 
ll arr[n];
read(arr,n);
ll odd=0, even=0;
for(int i=0; i<n; i++)
  if(arr[i]%2==0)
    even++;
    else
    odd++;
    vector<vector<vector<int>>> dp(odd , vector<vector<int>>(even, vector<int>(-1,2))); 
  cout<< solve(even, odd, dp, true)<<endl;  
  }
return 0;
}