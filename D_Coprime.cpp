#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
#define fori(s,e,g)    for(ll i=s; i<=e; i+=g)
#define ford(s,e,g)    for(ll i=s; i>=e; i-=g)
#define p(temp)        cout<<temp<<endl
 
ll  sum(ll arr[],ll n)  {ll sum=0; for(ll i=0; i<n; i++) sum+=arr[i]; return sum;}
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// space for helper functions
bool dp[1001][1001];

bool coprime(int a, int b) {
     
    if ( __gcd(a, b) == 1)
        return true;
    else
        return false;       
}
int main()
{
ll tc;
cin>>tc;
for(ll i=0; i<1001; i++)
  for(ll j=0; j<1001; j++)
    if(coprime(i,j))
      dp[i][j]=true;
      else
      dp[i][j]=false;
while(tc--)
{
// your testcases here
ll n;
cin>>n;
ll arr[n];
read(arr,n);
ll max=0;
vector<ll> vect(1001, -100000);
fori(0,n-1,1)
     vect[arr[i]]=i+1;
// print_vect(vect);
     for(int i=0; i<1001; i++)
       for(int j=0; j<1001;j++)
         if(dp[i][j])
             {
                // cout<<i<<" "<<j<<endl;
                if(vect[i]+vect[j]>max  && vect[i]!=-100000 && vect[j]!=-100000)
              max=vect[i]+vect[j];
             }
   max==0? p(-1):p(max);    
}
return 0;
}