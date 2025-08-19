class Solution {

public:
    void BFS(vector<vector<int>>& isConnected, int u,int n, vector<bool>& visited){
        queue<int> que;
        que.push(u);
        visited[u]=true;

        while(!que.empty()){
            int curr = que.front();
            que.pop();

            for(int v=0;v<n;v++){
                if(!visited[v] && isConnected[curr][v]==1){
                    que.push(v);
                    visited[v]=true;
                }
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        /*unordered_map<int, vector<int>> adj;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        */
        vector<bool> visited(n,false);
        int count=0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                BFS(isConnected, i, n, visited);
                count++;
            }
        }
        return count;
    }
};