>> BFS 
       
        >>> Reources:
        
            T-1: https://cp-algorithms.com/graph/breadth-first-search.html
        
        >>> Implementation:

            const int N=200000;
            bool vis[N];
            int level[N];
            vector<int> adj[N];
            
            void bfs(int v)
            {
            	queue<int> q;
            	q.push(v);
            	vis[v]=1;
            	while(!q.empty())
            	{
            		int val=q.front();
            		q.pop();
            		for(auto i:adj[val])
            		{
            			if(!vis[i])
            			{
            			    q.push(i);
            				level[i]=level[val]+1;
            				vis[i]=1;
            			}
            		}
            	}
            }
        
        
    
