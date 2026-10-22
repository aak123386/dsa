class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       map<int,int>mp;
       int start=9999;
       int end=-9999;
       for(auto i:trips){
        start=min(start,i[1]);
        end=max(end,i[2]);
        mp[i[1]]+=i[0];
        mp[i[2]]-=i[0];
       } 
        int carload=0;
       for(int i=start;i<=end;i++){
         carload+=mp[i];
         if(carload>capacity){
            return false;
          }
    }
    return true;
    }
};