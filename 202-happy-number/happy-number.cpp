class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        while(n!=1){
            if(mp[n]==1){
                return false;
            }
            mp[n]=1;
        int sum=0;
        while(n>0){
             int digit=n%10;
             sum+=digit*digit;
             n=n/10;
    }
    n=sum;
    }
    return true;
    }
};