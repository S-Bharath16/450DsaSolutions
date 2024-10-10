#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int coinChange(vector<int> &coins,int Amount){
	vector<int> dp(Amount+1,Amount+1);
	dp[0] = 0;
	for(int i=1;i<=Amount;i++){
		for(int j=0;j<coins.size();j++){
			if(coins[j]<=i){
				dp[i] = min(dp[i],dp[i-coins[j]]+1);
			}
		}
	}
	return dp[Amount] > Amount ? -1 : dp[Amount];
}
 int main() {
 vector<int> coins = {1, 2, 5};
 int amount = 20;
 cout << "Minimum coins needed: " << coinChange(coins, amount) << endl;
 return 0;
 }
