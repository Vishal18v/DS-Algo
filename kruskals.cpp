vector<pair<int,pair<int,int>>> v;
unordered_map<int,int>mp;

int find(int x)
{
    if(mp.count(x)==0)
        mp[x]=x;
    if(x!=mp[x])
        mp[x] = find(mp[x]);
    return mp[x];
}
void unionn(int x,int y)
{
    x = find(x); y = find(y);
    if(x!=y)
        mp[x] = y;
}
int kruskal()
{
    sort(v.begin(),v.end());
    int res = 0;
    for(int i=0;i<v.size();i++)
    {
        if(find(v[i].second.first)!=find(v[i].second.second))
        {
            res+=v[i].first;
            unionn(v[i].second.first,v[i].second.second);
        }
    }
    return res;
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    v.clear();
    mp.clear();
    for(int i=0;i<B.size();i++)
        v.push_back({B[i][2],{B[i][0],B[i][1]}});
    return kruskal();
    
}
