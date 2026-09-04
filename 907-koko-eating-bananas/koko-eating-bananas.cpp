class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int start=1;
       int end=*max_element(piles.begin(),piles.end());
        int ans=0;
       while(start<=end){
        int mid=(start+end)/2;
        long long hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=ceil(piles[i]/double(mid));
        }
        if(hours<=h){
            ans=mid;
            end=mid-1;
        }
        else if(hours>h){
             start=mid+1;
        }
        else{
           end=mid-1;
        }
       }
    return ans;
    }
};