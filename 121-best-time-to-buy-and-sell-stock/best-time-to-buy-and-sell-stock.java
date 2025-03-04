class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int cur_profit=0;
        int cur_price=prices[0];
        int max_profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]<cur_price){
                cur_price=prices[i];
            }else{
                cur_profit=prices[i]-cur_price;
            }
            if(cur_profit>max_profit){
                max_profit=cur_profit;
            }
        }
        return max_profit;
    }
}