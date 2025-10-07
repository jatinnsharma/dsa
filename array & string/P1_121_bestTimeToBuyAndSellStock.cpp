class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice=0,minPrice=INT_MAX;
        for(int price:prices){
            minPrice = min(minPrice,price);
            maxPrice = max(price-minPrice,maxPrice);
        }

        return maxPrice;
    }
};