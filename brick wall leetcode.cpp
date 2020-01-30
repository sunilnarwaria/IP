class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
         unordered_map<int, int> mp ;
        for (int i=0;i<wall.size();i++) {
            int sum = 0;
            for (int j=0; j<wall[i].size()-1; j++) {
                sum += wall[i][j];
                if (mp.find(sum)!= mp.end()) {
                    //mp.insert(sum,mp.find(sum)+1);
                    mp[sum]++;
                } else {
                    mp.insert({sum,1});
                }
            }
        }
        
        int mx = 0;
        for (auto it: mp) {
            mx = max(mx, it.second);
        }
        return wall.size() - mx;
        
        
    }
};
