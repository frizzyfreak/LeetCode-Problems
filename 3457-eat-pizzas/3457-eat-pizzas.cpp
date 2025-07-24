class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end());
            int n=pizzas.size();
            int totaldays = n/4;
            int index= n-1;
            long long weight=0;
            for(int i=1;i<=totaldays;i+=2)
            {
                weight+=pizzas[index--];
                //index=index-1;
            }
            index--;
            for(int i=2;i<=totaldays;i+=2){
                weight+=pizzas[index];
                index-=2;
            }
        return weight;
    }
};