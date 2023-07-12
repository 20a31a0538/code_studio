//Best time to buy and sell stock
int mini=prices[0];
    int maxProfit = 0;
    int cost;
    for(int i=1; i<prices.size(); i++){
        cost = prices[i] - mini;   //sell - buy
        maxProfit = max(maxProfit,cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;