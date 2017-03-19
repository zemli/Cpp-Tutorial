class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        unordered_map<long, int> mymap;//map(dis) = occurrency 
        int n = points.size();
        int num = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                long distance = dist(points[i], points[j]);
                mymap[distance]++;
            }
            
            for(unordered_map<long,int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
                int val = it->second;
                num += val*(val-1);//number of ways to select 2 points have same distance
            }
            
            mymap.clear();
        }
        
        return num;
    }
private:
    long dist(pair<int, int> point1, pair<int, int> point2){
        return (point1.first - point2.first)*(point1.first - point2.first) + (point1.second - point2.second)*(point1.second - point2.second); //dosen't need sqrt // use long, float isn't enough
        
    }
};