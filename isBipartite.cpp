bool isBipartite(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]!=-1)
                continue;
            
            queue<int>q;
            q.push(i);
            color[i]=1;
            while(!q.empty())
            {
                auto u = q.front(); q.pop();
                for(auto v:graph[u])
                {
                    if(color[v]==-1)
                    {
                        color[v] = 1-color[u];
                        q.push(v);
                    }
                    else if(color[u]==color[v])
                        return false;
                }
            }
        }
        return true;
        
    }
