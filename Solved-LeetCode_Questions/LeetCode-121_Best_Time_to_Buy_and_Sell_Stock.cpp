class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int best_buying_price = prices[0], max_profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > best_buying_price)
            {
                max_profit = max(max_profit, prices[i] - best_buying_price);
            }
            best_buying_price = min(best_buying_price, prices[i]);
        }
        return max_profit;
    }
};