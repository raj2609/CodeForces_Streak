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

int main()
{
ll tc;
cin>>tc;
while(tc--)
{
  
// your testcases here
ll n;
cin>>n;
string s;
cin>>s;
bool arr[26];
memset(arr, false, sizeof(arr));
string res="";
unordered_map<char, char> mapp;
 for(int i=0; i<n; i++)
    res+=(char(i+'a'));
map<char, char> mapp;
while(true)
{
    for(int i=0; i<n; i++)
      {
        if(s[i]==res[i])
            swap(res[i], res[(i+1)%n]);
            
       else if(mapp.find(s[i])!=mapp.end())
       {
            res.insert(i, to_string(mapp[s[i]]));
            res.pop_back();
            
       }
       else
         mapp[s[i]]=res[i];
      }
      bool x = true;
      for(int i=0; i<n; i++)
        {
            if(res[i]==s[i])
              break;
              if(mapp[s[i]])
        }
}
   cout<<res<<endl;
}
return 0;
}