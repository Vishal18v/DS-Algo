int island=0;
    unordered_map<int,int> mp;
    int removeStones(vector<vector<int>>& stones) 
    {
        for(int i=0;i<stones.size();i++)
        {
           unioN(stones[i][0],~stones[i][1]); 
        }
        return stones.size()-island;
        
    }
    
    int find(int x)
    {
        if(mp.count(x)==0)
        {
            mp[x]=x;
            island++;
        }
        if(x!=mp[x])
            mp[x] = find(mp[x]);
        return mp[x];
    }
    
    
    void unioN(int x,int y)
    {
        x = find(x); y = find(y);
        if(x!=y){
            mp[x]=y;
            island--;
        }
    }
