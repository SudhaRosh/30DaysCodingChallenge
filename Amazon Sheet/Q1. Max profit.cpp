-----------MAx profit----------
Buy sell


class Solution {
public:
    int maxProfit(vector<int>& a) {    // a=prices 
        int maxPro=0;
        int    min_sofar=INT_MAX;
        
        for(int i=0;i<a.size();i++){
            min_sofar=min(min_sofar,a[i]);
        maxPro=max(maxPro,a[i]-min_sofar);
    }
        return maxPro;

    }
};
