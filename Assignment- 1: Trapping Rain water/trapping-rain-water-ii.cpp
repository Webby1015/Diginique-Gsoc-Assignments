class Solution {
public:
    priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    int water = 0;
    int v[5] = {-1, 0, 1, 0, -1};
    void dfs(vector<vector<int>> & height, vector<vector<bool>> &visited){
        int n = height.size();
        int m = height[0].size();
        while(!pq.empty()){
           auto t = pq.top();
           pq.pop();
           for(int i = 0; i<4; i++){
               int x = t[1] + v[i];
               int y = t[2] + v[i+1];
               if(x>=0 && x<n && y>=0 && y<m && !visited[x][y]){
                   visited[x][y] = true;
                   if(height[x][y] >= t[0]) pq.push({height[x][y], x, y});
                   else{
                       water += t[0] - height[x][y];
                       height[x][y] = t[0];
                       pq.push({t[0], x, y});
                   } 
               }
           }
        }
    }
    int trapRainWater(vector<vector<int>>& height) {
        int n = height.size();
        int m = height[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, 0)); 
        for(int i = 0; i<n; i++){
            if(!visited[i][0]){
               pq.push({height[i][0], i, 0});
               visited[i][0] = true;
            }
            if(!visited[i][m-1]){
               pq.push({height[i][m-1], i, m-1});
               visited[i][m-1] = true;
            }
        }
        for(int i = 0; i<m; i++){
            if(!visited[0][i]){
              pq.push({height[0][i], 0, i});
              visited[0][i] = true;
            }
            if(!visited[n-1][i]){
              pq.push({height[n-1][i], n-1, i});
              visited[n-1][i] = true;
            }
        }
        dfs(height, visited);
        return water;
    }
};






