typedef pair<int,int> pii;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) 
    {
        vector<vector<pii>>g(N+1);
        for(auto i:times)
            g[i[0]].push_back({i[1],i[2]});
            
        vector<int> dist(N+1,INT_MAX);
        dist[K]=0;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        pq.push({0,K});
        
        while(!pq.empty())
        {
            auto elem = pq.top(); pq.pop();
            int u = elem.second;            
            for(auto i:g[u])
            {
                int v = i.first;
                int w = i.second;
                
                if(dist[v]>dist[u]+w)
                {
                    dist[v] = dist[u]+w;
                    pq.push({dist[v],v});
                }
                
            }
        }
        int ans = *max_element(dist.begin()+1,dist.end());
        return (ans==INT_MAX)?-1:ans;
        
    }
};
