#include<bits/stdc++.h>
using namespace std;


int n,m;
vector<pair<int,int>> v[10];
int vis[10];
void input(){
int a,b,x,i;
cin>>n>>m;

for(i=0;i<m;i++){
    cin>>a>>b>>x;
    v[a].push_back(make_pair(a,x));
    v[b].push_back(make_pair(a,x));
}

}

int dfs(int u){
int ans=0,l,i;
vis[u]=1;

l=v[u].second;
ans=max(l,ans);
for(i=0;i<v[u].size();i++){
  if(vis[i]) continue;

  ans=max(ans,dfs(v[u]));

}
return ans

}


int main()
{
  input();
  memset(vis,0,sizeof vis);

cout<<dfs(1)<<;



  return 0;
}

//atik 
