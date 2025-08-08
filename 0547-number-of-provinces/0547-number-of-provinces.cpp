class Solution {
        void DFS(unordered_map<int, vector<int>>& adj, int u, vector<bool>& visited){
            visited[u]=true;
            for(int &v:adj[u]){
                if(!visited[v]){
                    DFS(adj,v,visited);
                }
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        unordered_map<int, vector<int>> adj;
        //make graph
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if(isConnected[i][j]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(adj,i,visited);
                count++;
            }
        }
        return count;

    }
};