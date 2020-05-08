void dfs(int u,vector<int>&visited,vector<vector<int>>&g,bool &answ)
    {
        visited[u] = 1;
        for(int i=0;i<g[u].size();i++)
        {
            if(visited[g[u][i]]==0)
                dfs(g[u][i],visited,g,answ);
            else if(visited[g[u][i]]==1)
                answ = true;
            
        }
        visited[u] = 2;
    }
    
    void topsort(int u,vector<int>&ans,vector<int>&visited,vector<vector<int>>&g)
    {
        visited[u] = 1;
        for(auto i:g[u])
        {
            if(visited[i]==0)
                topsort(i,ans,visited,g);
        }
        ans.push_back(u);     
        
    }
    
    vector<int> findOrder(int num, vector<vector<int>>& pre) 
    {
        vector<int>visited(num);
        vector<vector<int>>g(num);
        vector<int> ans;
        
        for(int i=0;i<pre.size();i++)
            g[pre[i][0]].push_back(pre[i][1]);
        
        //to find cycle
        bool answ = false;
        for(int i=0;i<num;i++)
        {
            if(visited[i]==0)
                dfs(i,visited,g,answ);
            if(answ)
                break;
        }
        if(answ==true)
            return ans;
        
        for(int i=0;i<num;i++)
            visited[i] = 0;
        for(int i=0;i<num;i++)
            if(visited[i]==0)    
                topsort(i,ans,visited,g);
        
        //reverse(ans.begin(),ans.end());
        return ans;            
        
    }
