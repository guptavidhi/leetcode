class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = 0;
        int min = INT_MAX;
        int p=0;

        for (int i = 0; i < prices.size(); i ++){
            if(prices[i]<min){
                min = prices[i];
            }
            p = prices[i]-min;
            if(k < p){
                k=p;
            }
            // cout<<"min: "<<min<<" ; k: "<<k<<" ; p ="<<p<<endl;
        }
        return k;
    }
};
