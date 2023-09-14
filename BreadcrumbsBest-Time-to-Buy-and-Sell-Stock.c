int maxProfit(int* prices, int pricesSize)
{
    if(pricesSize == 0) return 0;

    int buy=prices[0];
    int sell=0;
    int profit=0;
    int temp=0;

    for(int i=1; i<pricesSize; i++)
    {

        sell = prices[i];
        temp = sell - buy;
        if(temp > profit)
        {
            profit = temp;
        }
        if(temp < 0)
        {
            buy = prices[i];
        }

    }

    return profit;
}
