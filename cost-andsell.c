#include <stdio.h>
int main()
{
    int cost, sell, profit, loss;

    printf("enter the cost and selling price respectively");
    scanf("%d%d", &cost, &sell);

    if (sell > cost)
    {
        profit = sell - cost;
        printf("seller has made profit rupees %d ", profit);
    }
    else if (cost > sell)
    {
        loss = cost - sell;
        printf("seller has made loss rupees %d", loss);
    }
    else
    {
        printf("seller has made no loss and no profit, both prices are equal");
    }

    return 0;
}