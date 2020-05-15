int networkDelayTime(vector<vector<int>>& times, int N, int K) 
    {
        vector<int> dist(N+1,INT_MAX);
        dist[K]=0;
        for(int i=0;i<N;i++)
        {
            for(auto p:times)
            {
                int u=p[0],v=p[1],w=p[2];
                if(dist[u]!=INT_MAX)
                    dist[v] = min(dist[v],dist[u]+w);
            }
        }
        
        int ans = *max_element(dist.begin()+1,dist.end());
        return (ans==INT_MAX)?-1:ans;
        
    }
